/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagg <dbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 10:30:29 by dbagg             #+#    #+#             */
/*   Updated: 2021/10/29 18:39:32 by dbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *str;

	str = (char *)s;
	while (*str != c)
	{
		if (*str == '\0')
			return NULL;
		str++;
	}
	return str;
}


// #include <stdio.h>

// int main()
// {
// 	char *s="qwertyuiop";
// 	printf("%s", ft_strchr(s, 't'));
// 	return 0;
// }