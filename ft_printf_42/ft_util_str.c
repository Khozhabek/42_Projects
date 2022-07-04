/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagg <dbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:26:26 by dbagg             #+#    #+#             */
/*   Updated: 2021/11/09 11:26:27 by dbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *str, int ch)
{
	while (*str != '\0')
	{
		if ((unsigned char)*str == (unsigned char)ch)
			return ((char *)str);
		str++;
	}
	if (ch == 0)
		return ((char *)str);
	return (NULL);
}
