/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagg <dbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 18:56:45 by dbagg             #+#    #+#             */
/*   Updated: 2021/10/29 12:25:35 by dbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && --dstsize > 0)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}

// #include <stdio.h>
// int main()
// {
// 	char a[100]= "asdfghjkl";
// 	char b[100]= "qwerty";
// 	printf("%s\n",a);
// 	ft_strlcpy(a,b,10);
// 	printf("%s\n",a);
// 	return 0;
// }