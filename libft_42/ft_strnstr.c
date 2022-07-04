/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagg <dbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 12:11:50 by dbagg             #+#    #+#             */
/*   Updated: 2021/10/28 17:14:41 by dbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int i;
	unsigned int j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (i < len && haystack[i])
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while ((i + j < len) && needle[j] == haystack[i+j])
			{
				j++;
				if (!needle[j])
					return ((char *)&haystack[i]);
			}
		}
		i++;
	}	
	return 0;
}

// #include <stdio.h>
// int main()
// {
// 	char *a = "qwertyuiop";
// 	char *b = "wer";
// 	printf("%s\n", ft_strnstr(a,b,10));
// 	printf("%s", strnstr(a,b,10));
// 	return 0;
// }