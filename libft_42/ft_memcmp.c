/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagg <dbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 11:14:43 by dbagg             #+#    #+#             */
/*   Updated: 2021/10/28 12:11:34 by dbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *str1;
	const unsigned char *str2;
	if (s1 == s2 || n == 0)
		return (0);
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (n--)// почему пока не дойдет до нуля нет тут?
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		if(n)
		{
			str1++;
			str2++;
		}
	}
	return 0;
}

// #include <stdio.h>
// int main()
// {
// 	char a[100]="khoaha";
// 	char b[100]="khoaha";
// 	int c;
// 	c = ft_memcmp(a,b,7);
// 	if (c == 0)
// 		printf("vse odinakovie");
// 	else 
// 		printf ("%d", c);
// 	return 0;
// }