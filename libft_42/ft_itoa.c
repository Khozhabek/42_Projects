/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagg <dbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 16:29:41 by dbagg             #+#    #+#             */
/*   Updated: 2021/10/30 19:42:13 by dbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_len(long nb)
{
	int len;

	len = 0;
	if (nb <= 0)
	{
		nb = nb * -1;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return len;
}

char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char *ft_itoa(int n)
{
	char *str;
	long nb;
	int i;

	nb = n;
	i = ft_len(n);
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return NULL;
	str[i--]='\0';
	if (n == 0)
	{
		str[0] = 48;
		return (str);
	}
	if (n == -2147483648)
		return (ft_strcpy(str, "-2147483648"));
	if (n < 0)
	{
		str[0]= '-';
		n = n * -1;
	}
	while (n > 0)
	{
		str[i] = 48 + (n % 10);
		n = n / 10;
		i--;
	}
	return (str);
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%s",ft_itoa(-1234536));
// 	return 0;
// }