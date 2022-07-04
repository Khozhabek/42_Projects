/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagg <dbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 20:57:45 by dbagg             #+#    #+#             */
/*   Updated: 2021/10/29 10:42:20 by dbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
	char *str2;
	int i;

	str2 = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!str2)
		return NULL;
	i = 0;
	while( s1[i] !='\0')
	{
		str2[i] = s1[i];
		i++;
	}
	str2[i] = '\0';
	return str2;
}

// #include <stdio.h>
// int main()
// { 
// 	char *s = "asaaaadfgdfhjhhgghjftdh";
// 	char *d = ft_strdup(s);
// 	printf("%s", d);
// 	return 0;
// }