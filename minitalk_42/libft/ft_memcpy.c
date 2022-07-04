/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagg <dbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 20:07:24 by dbagg             #+#    #+#             */
/*   Updated: 2021/10/20 10:42:50 by dbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*sour;

	if ((dst == NULL) && (src == NULL))
		return (NULL);
	i = -1;
	dest = (unsigned char *)dst;
	sour = (unsigned char *)src;
	while (++i < n)
		dest[i] = sour[i];
	return (dst);
}
