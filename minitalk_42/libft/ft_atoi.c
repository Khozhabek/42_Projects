/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagg <dbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 18:06:49 by dbagg             #+#    #+#             */
/*   Updated: 2021/10/20 13:06:22 by dbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	short int			sign;
	unsigned long		result;

	result = 0;
	sign = 1;
	while (*str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == ' ')
		++str;
	if (*str == '-' && ++str)
		sign = -1;
	else if (*str == '+')
		++str;
	while ('0' <= *str && *str <= '9')
	{
		result = result * 10UL + (unsigned long)*str - 48UL;
		++str;
	}
	if (result > 9223372036854775807 && sign == 1)
		return (-1);
	if (result > 9223372036854775807 && sign == -1)
		return (0);
	return ((int)result * sign);
}
