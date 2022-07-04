/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagg <dbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:20:16 by dbagg             #+#    #+#             */
/*   Updated: 2021/12/13 18:44:54 by dbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include "libft.h"

# define SLEEP 100

void	send_message(int pid, unsigned char ch);
void	print_message(int signal, siginfo_t *siginfo, void *context);
void	print_pid(int process_id);
void	print_sent(char *str);

#endif