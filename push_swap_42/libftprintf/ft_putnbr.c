/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagg <dbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 10:50:13 by dbagg             #+#    #+#             */
/*   Updated: 2021/12/17 10:50:15 by dbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	unsigned int	nbr;
	int				ret;

	ret = 0;
	if (n < 0)
	{
		ret += ft_putchar('-');
		nbr = (unsigned int)(n * -1);
	}
	else
		nbr = (unsigned int)n;
	if (nbr >= 10)
		ret += ft_putnbr(nbr / 10);
	ret += ft_putchar((char)(nbr % 10 + '0'));
	return (ret);
}
