/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagg <dbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 19:56:02 by dbagg             #+#    #+#             */
/*   Updated: 2021/10/30 20:02:31 by dbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd ("-2147483648", fd);
	else if ( n < 0)
	{
		ft_putchar_fd ('-', fd);
		ft_putnbr_fd (-n, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd (n %10 + '0', fd);
	}
	else 
		ft_putchar_fd(n + '0', fd);
}