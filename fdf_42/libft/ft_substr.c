/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagg <dbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 21:32:41 by dbagg             #+#    #+#             */
/*   Updated: 2022/01/09 21:32:43 by dbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*isk;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	if (len > (size_t)ft_strlen(s))
		len = ft_strlen(s) - start;
	if (start >= ft_strlen(s))
		len = 0;
	isk = (char *)malloc(sizeof(*s) * (len + 1));
	if (!isk)
		return (0);
	while (s[i] != '\0')
	{
		if (i >= start && len > j)
			isk[j++] = s[i];
		i++;
	}
	isk[j] = '\0';
	return (isk);
}
