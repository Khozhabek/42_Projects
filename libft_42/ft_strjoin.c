/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagg <dbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 11:46:46 by dbagg             #+#    #+#             */
/*   Updated: 2021/10/29 12:41:49 by dbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t s1_len;
	size_t s2_len;
	char *str;

	if (!s1 || !s2)
		return NULL;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	str = (char *)malloc(sizeof(char)* (s1_len + s2_len + 1));
	if (str == NULL)
		return NULL;
	ft_strlcpy(str, s1, s1_len +1);
	ft_strlcat(str, s2 , s1_len + s2_len + 1);
	return ((char *)str);
}

// #include <stdio.h>
// int main()
// {
// 	char *s1="We down ";
// 	char *s2="we GO GO GO GO GO";
// 	printf("%s",ft_strjoin(s1,s2));
// 	return 0;
// }