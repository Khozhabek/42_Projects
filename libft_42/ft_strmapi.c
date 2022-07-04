/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagg <dbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 17:47:40 by dbagg             #+#    #+#             */
/*   Updated: 2021/10/30 19:20:04 by dbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int i;
	char *str;

	if (!s)
		return NULL;
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) +1));
	if (!str)
		return NULL;
	while (s[i]!= '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return str;
}



// #include <stdio.h>
// char ft_f(unsigned int a, char b)
// {
// 	printf("My inner function: index = %d and %c\n", a, b);
// 	return b - 32;
// }

// int main()
// {
// 	char *str= "qwerty";
// 	char *result = ft_strmapi(str, ft_f);
// 	printf("%s", result);
// 	return 0;
// }