/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_func.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagg <dbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 21:30:48 by dbagg             #+#    #+#             */
/*   Updated: 2022/01/09 21:30:49 by dbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_c(char c)
{
	return (write(1, &c, 1));
}

int	ft_put_d(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
	{
		len += ft_put_c('-');
		len += ft_put_d(21474);
		len += ft_put_d(83648);
		return (len);
	}
	if (n < 0)
	{
		len += ft_put_c('-');
		n = -n;
	}
	if (n >= 10)
	{
		len += ft_put_d(n / 10);
		len += ft_put_d(n % 10);
	}
	else
		len += ft_put_c(n + '0');
	return (len);
}

int	ft_put_s(char *s)
{
	int	len;

	len = 0;
	if (!s)
		s = "(null)";
	if (s)
	{
		while (*s)
		{
			len += write (1, s, 1);
			s++;
		}
	}
	return (len);
}
