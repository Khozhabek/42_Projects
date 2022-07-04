/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagg <dbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:33:05 by dbagg             #+#    #+#             */
/*   Updated: 2021/10/26 17:29:59 by dbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *	ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *sour;
	unsigned char *dest;
	size_t i;

	if ((dst == NULL) && (src == NULL))
		return NULL;
	sour = (unsigned char *)src;
	dest = (unsigned char *)dst;
	i = 0;
	while (n > i)
	{
		dest[i] = sour[i];
		i++;
	}
	return (dst);
}