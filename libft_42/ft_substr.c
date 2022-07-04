/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagg <dbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 21:09:44 by dbagg             #+#    #+#             */
/*   Updated: 2021/10/29 11:37:35 by dbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	size_t j;
	char *str;

	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str || !s)
		return NULL;
	i = 0;
	j = 0;
	while(s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return str;
}

// #include <stdio.h>
// int main()
// {
//   char *f= "qwtyuiop";
//   char *g=ft_substr(f,2,5);
//   printf("%s", g);
//   return 0;
// }
