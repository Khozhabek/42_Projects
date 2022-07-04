/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagg <dbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 10:45:07 by dbagg             #+#    #+#             */
/*   Updated: 2021/10/30 17:58:10 by dbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	char *str;

	i = 0;
	str = (void *)s;
	while (i < n)
	{
		if (str[i] == (char)c)
			return (&str[i]);
		i++;
	}
	return NULL;
}

// #include <stdio.h>
// int main()
// {
// 	char a[100]= "Petya";
// 	char *str = ft_memchr(a, 'e', 5);
// 	printf("%s\n", str);
// }