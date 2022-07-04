/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagg <dbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 13:50:37 by dbagg             #+#    #+#             */
/*   Updated: 2021/10/28 11:08:12 by dbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *dest;
	size_t i;

	i = 0;
	dest = (unsigned char *)b;
	while (len > i)
	{
		dest[i] = (unsigned char)c;
		i++;
	}
	return b;
}