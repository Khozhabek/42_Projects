/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagg <dbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:33:41 by dbagg             #+#    #+#             */
/*   Updated: 2021/10/28 17:56:39 by dbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t neg;
	size_t res;
	size_t i;

	neg = 1;
	res = 0;
	i = 0;
	while (str[i] == '\n' || str[i]== ' ' || str[i] == '\r' || str[i] == '\t' || str[i] == '\f' || str[i]=='\v')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i]=='-')
			neg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i]<= '9')
	{
		res = res*10 + str[i] - '0';
		i++;
	}
	return (res*neg);
}

// #include <stdio.h>
// int main()
// {
// 	char *a = "12345";
// 	printf("%d", ft_atoi(a));
// 	return 0;
// }