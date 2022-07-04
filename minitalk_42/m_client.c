/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_client.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagg <dbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:19:57 by dbagg             #+#    #+#             */
/*   Updated: 2021/12/13 18:53:47 by dbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	handler_ping(int signal)
{
	static unsigned long	counter;

	if (signal == SIGUSR1)
		++counter;
	else
	{
		ft_putstr_fd("Received: ", 1);
		ft_putnbr_fd(counter >> 3, 1);
		ft_putstr_fd("\n", 1);
		exit(0);
	}
}

int	main(int argc, char **argv)
{
	unsigned int		process_id;
	int					i;
	struct sigaction	sig_act;

	i = -1;
	if (argc != 3)
		return (-1);
	sig_act.sa_handler = handler_ping;
	sig_act.sa_flags = SA_SIGINFO;
	if (sigaction(SIGUSR1, &sig_act, NULL) == -1
		|| sigaction(SIGUSR2, &sig_act, NULL) == -1)
		write(2, "SIGERROR!\n", 11);
	print_sent(argv[2]);
	process_id = ft_atoi(argv[1]);
	while (argv[2][++i])
		send_message(process_id, argv[2][i]);
	send_message(process_id, 0);
	return (0);
}
