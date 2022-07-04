/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagg <dbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 10:56:15 by dbagg             #+#    #+#             */
/*   Updated: 2021/10/28 10:12:05 by dbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *lastPos;

	lastPos = 0;
	while (*s)
	{
		if (*s == c)
			lastPos = (char *)s;
		++s;
	}
	if (lastPos)
		return lastPos;
	if (c == '\0')
		return ((char *)s);
	return (0);
}

// #include <stdio.h>
// int main()
// {
// 	char a[100]= "qwertyuiop";
// 	int b = '\0';
// 	printf("%s", ft_strrchr(a,b));
// 	return 0;
// }