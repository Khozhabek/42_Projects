/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagg <dbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 10:49:49 by dbagg             #+#    #+#             */
/*   Updated: 2021/12/17 10:49:58 by dbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putnbr_base(size_t n, char *base, int base_len, char format)
{
	int		len;
	int		i;
	char	str[30];

	i = 0;
	len = 0;
	if (ft_search("uxX", format, 1))
		n = (unsigned int) n;
	if (n == 0)
		return (ft_putchar(base[0]));
	while (n != 0)
	{
		str[i++] = base[n % base_len];
		n /= base_len;
		len++;
	}
	while (i--)
		ft_putchar(str[i]);
	return (len);
}
