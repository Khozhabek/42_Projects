/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagg <dbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 19:55:33 by dbagg             #+#    #+#             */
/*   Updated: 2021/10/28 16:52:47 by dbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t dst_len;
	size_t src_len;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	while (src[i] && (dst_len + i < dstsize - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

// #include <stdio.h>
// int main(void)
// {
// 	char str1[100] = "Flavio";
// 	char str2[100] = "Gaucho";

// 	printf("%s\n", str1);   // displaying what str1 is before ft_strcpy is used on it
// 	ft_strlcat(str1, str2,15);  // calling out functtion ft_strcpy on the strings
// 	printf("%s\n", str1);  // str1 should now become str2
// 	return (0);
// }
