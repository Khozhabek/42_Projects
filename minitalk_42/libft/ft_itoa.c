/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagg <dbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 12:34:43 by dbagg             #+#    #+#             */
/*   Updated: 2021/10/20 15:47:13 by dbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_itoa_put(char *num, int n, int num_rank)
{
	if (n < 0)
	{
		*num = '-';
		num_rank *= -1;
		++num;
	}
	while (num_rank != 0)
	{
		*num = (char)(n / num_rank + 48);
		n %= num_rank;
		num_rank /= 10;
		++num;
	}
	*num = '\0';
}

char	*ft_itoa(int n)
{
	char	*num;
	int		num_rank;
	short	num_len;

	num_len = 1;
	num_rank = 1;
	if (n < 0)
		++num_len;
	while (n / num_rank / 10 != 0 && ++num_len)
		num_rank *= 10;
	num = malloc(sizeof(char) * (num_len + 1));
	if (!num)
		return (NULL);
	ft_itoa_put(num, n, num_rank);
	return (num);
}
