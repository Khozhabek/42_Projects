/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagg <dbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 10:42:01 by dbagg             #+#    #+#             */
/*   Updated: 2021/12/17 10:42:10 by dbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (s)
	{
		while (s[i])
			ft_putchar_fd(s[i++], fd);
	}
}

void	exit_str(char *str_error, int i)
{
	ft_putstr_fd(str_error, 2);
	if (i == 0)
		ft_putstr_fd("\n", 2);
	exit(EXIT_FAILURE);
}
