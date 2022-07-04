/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagg <dbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 21:15:23 by dbagg             #+#    #+#             */
/*   Updated: 2021/10/19 19:34:47 by dbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	s_sub_len;

	if (!s)
		return (NULL);
	if ((size_t)start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len <= ft_strlen(&s[start]))
		s_sub_len = len;
	else
		s_sub_len = ft_strlen(&s[start]);
	sub_str = malloc(sizeof(char) * (s_sub_len + 1));
	if (sub_str == NULL)
		return (NULL);
	ft_strlcpy(sub_str, &s[start], s_sub_len + 1);
	return (sub_str);
}
