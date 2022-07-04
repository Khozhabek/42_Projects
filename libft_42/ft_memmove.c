/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagg <dbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 17:34:21 by dbagg             #+#    #+#             */
/*   Updated: 2021/10/26 20:10:47 by dbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *dest;
	unsigned char *sour;
	size_t i;

	dest = (unsigned char *)dst;
	sour = (unsigned char *)src;	
	if ((dst == NULL) && (src == NULL))
		return (NULL);
	if (src > dst)
	{
		i = 0;
		while (len > i)
		{
			dest[i] = sour[i];
			i++; 
		}
	}
	else
	{
		while (len > 0)
		{
			dest[len -1] = sour[len -1];
			len--;
		}
	}
	return (dest);
}

// #include <stdio.h>
// int main()
// {
// 	char a[100]= "aaaaaaaaaa";
// 	char b[100]= "qwerty";
// 	printf("%s\n", ft_memmove(a,b,10));
// 	printf("%s", memmove(a,b,10));
// 	return 0;
// }