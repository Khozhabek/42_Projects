/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagg <dbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 18:48:44 by dbagg             #+#    #+#             */
/*   Updated: 2021/10/30 17:58:13 by dbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	if (str[0] != c)
		count++;
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != c && str[i + 1] != '\0')
			count++;
		i++;
	}
	return (count);
}

static int	sub_len(const char *start, char c)
{
	int	i;

	i = 0;
	while (start[i] != c && start[i])
		i++;
	return (i);
}

static char	**free_arr(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	res = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!res)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			res[j] = ft_substr(&s[i], 0, sub_len(&s[i], c));
			if (NULL == res[j++])
				return (free_arr(res));
			i += sub_len(&s[i], c);
		}
		else 
			i++;
	}
	res[j] = NULL;
	return (res);
}

// #include <stdio.h>
// int		main(void)
// {
// 	int i = 0;
// 	char **tab;
		
// 	tab = ft_split("21 school in Kazan", ' ');
// 	while (i < 4)
// 	{
// 		printf("string %d : %s\n", i, tab[i]);
// 		i++;
// 	}
// 	return (0);
// }
