/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_message.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagg <dbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:19:53 by dbagg             #+#    #+#             */
/*   Updated: 2021/12/13 20:16:32 by dbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send_message(int pid, unsigned char ch)
{
	uint8_t	i;

	i = 0x80;
	while (i)
	{
		if (ch & i)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		i >>= 1;
		pause();
		usleep(SLEEP);
	}
}

void	print_message(int signal, siginfo_t *siginfo, void *context)
{
	static unsigned char	ch;
	static int				i;
	static pid_t			client_pid;

	(void)context;
	if (client_pid != siginfo -> si_pid)
	{
		client_pid = siginfo -> si_pid;
		i = 0;
	}
	ch <<= 1;
	ch |= (signal == SIGUSR2);
	if (++i == 8)
	{
		if (!ch)
		{
			kill(client_pid, SIGUSR2);
			return ;
		}
		write(1, &ch, 1);
		i = 0;
		ch = 0;
	}
	usleep(SLEEP);
	kill(client_pid, SIGUSR1);
}

void	print_pid(int process_id)
{
	ft_putstr_fd("PID: ", 1);
	ft_putnbr_fd(process_id, 1);
	ft_putstr_fd("\nIncoming message:", 1);
}

void	print_sent(char *str)
{
	ft_putstr_fd("Sent: ", 1);
	ft_putnbr_fd(ft_strlen(str), 1);
	ft_putstr_fd("\n", 1);
}
