/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagg <dbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 10:42:49 by dbagg             #+#    #+#             */
/*   Updated: 2021/12/17 10:42:50 by dbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isspace(char c)
{
	return ((c >= 9 && c <= 13) || c == ' ');
}

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

long	ft_atoi(const char *str)
{
	int			i;
	int			k;
	long long	n;

	i = 0;
	k = 1;
	n = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
		k = -k;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (ft_isdigit(str[i]))
	{
		n = n * 10 + (str[i++] - '0');
		if (n < 0)
		{
			if (k < 0)
				return (0);
			return (-1);
		}
	}
	return ((long)n * k);
}
