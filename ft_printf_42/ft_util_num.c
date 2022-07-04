/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util.num.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagg <dbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:26:20 by dbagg             #+#    #+#             */
/*   Updated: 2021/11/09 11:26:21 by dbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_size_num(long int n)
{
	int		len;
	long	i;

	i = (long)n;
	if (n < 0)
		i = (long)n * -1;
	len = 0;
	while (i > 0)
	{
		i = i / 10;
		len++;
	}
	if (n > 0)
		return (len);
	else if (n == 0)
		return (1);
	else
		return (len + 1);
}

void	ft_putnbr(long int n)
{
	char	tmp;

	if (n < 0)
	{
		write (1, "-", 1);
		n = n * -1;
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	tmp = n % 10 + '0';
	write(1, &tmp, 1);
}

int	ft_size_num_hex(unsigned long long n)
{
	int					len;
	unsigned long long	i;

	i = n;
	len = 0;
	while (i > 0)
	{
		i = i / 16;
		len++;
	}
	if (n == 0)
		return (1);
	return (len);
}

void	ft_putnbr_hex(unsigned long long n, char c)
{
	char	tmp;

	if (n >= 16)
		ft_putnbr_hex(n / 16, c);
	if ((n % 16) >= 0 && (n % 16) <= 9)
		tmp = n % 16 + '0';
	else if (c == 'x')
		tmp = n % 16 + 'a' - 10;
	else if (c == 'X')
		tmp = n % 16 + 'A' - 10;
	write(1, &tmp, 1);
}
