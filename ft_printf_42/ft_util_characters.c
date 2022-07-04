/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util_characters.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagg <dbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:26:29 by dbagg             #+#    #+#             */
/*   Updated: 2021/11/09 11:26:30 by dbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_c(va_list	ap)
{
	char	c;

	c = va_arg(ap, int);
	return (write(1, &c, 1));
}

int	ft_print_s(va_list ap)
{
	char	*str;

	str = va_arg(ap, char *);
	if (!str)
		return (write(1, "(null)", 6));
	write(1, str, ft_strlen(str));
	return (ft_strlen(str));
}

int	ft_print_diu(va_list	ap, char type)
{
	long int	c;

	if (type == 'u')
		c = (unsigned int)va_arg(ap, int);
	else
		c = va_arg(ap, int);
	ft_putnbr(c);
	return (ft_size_num(c));
}

int	ft_print_x(va_list	ap, char type)
{
	unsigned int	c;

	c = va_arg(ap, unsigned int);
	ft_putnbr_hex(c, type);
	return (ft_size_num_hex(c));
}

int	ft_print_p(va_list	ap)
{
	long int			c;
	unsigned long long	a;

	c = (long int)va_arg(ap, void *);
	a = (unsigned long long)c;
	write(1, "0x", 2);
	ft_putnbr_hex(a, 'x');
	return (ft_size_num_hex(a) + 2);
}
