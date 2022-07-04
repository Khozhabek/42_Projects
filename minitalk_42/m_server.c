/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_server.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagg <dbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:20:09 by dbagg             #+#    #+#             */
/*   Updated: 2021/12/13 18:46:07 by dbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	main(void)
{
	struct sigaction	sig_act;

	print_pid(getpid());
	sig_act.sa_sigaction = print_message;
	sig_act.sa_flags = SA_SIGINFO;
	if (sigaction(SIGUSR1, &sig_act, NULL) == -1
		|| sigaction(SIGUSR2, &sig_act, NULL) == -1)
		write(2, "SIGERROR!!\n", 11);
	while (1)
		pause();
	return (0);
}
