/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagg <dbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:26:35 by dbagg             #+#    #+#             */
/*   Updated: 2021/11/09 11:40:12 by dbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_characters(char type, va_list ap)
{
	int	count;

	count = 0;
	if (type == 'c')
		count = ft_print_c(ap);
	else if (type == 's')
		count = ft_print_s(ap);
	else if (type == 'd' || type == 'i' || type == 'u')
		count = ft_print_diu(ap, type);
	else if (type == 'x' || type == 'X')
		count = ft_print_x(ap, type);
	else if (type == 'p')
		count = ft_print_p(ap);
	else
		count = write(1, &type, 1);
	return (count);
}

void	ft_counter(va_list ap, char *str, int *count)
{
	int		i;
	char	*istype;

	istype = "cspdiuxX%";
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			while (!ft_strchr(istype, str[i]) && str[i])
				i++;
			if (!str[i])
				break ;
			*count += ft_characters(str[i], ap);
		}
		else
			*count += write(1, &str[i], 1);
		i++;
	}
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		count;

	count = 0;
	va_start(ap, str);
	ft_counter(ap, (char *)str, &count);
	va_end(ap);
	return (count);
}

// #include <stdio.h>
// int              main(void)
// {
//  ft_printf("%d\n", ft_printf("%d%d", 42,41));
//  int a =13;
//  int *b;
//  b = &a;
//  ft_printf("\n");
//  ft_printf("%%\n");
//  ft_printf("%d\n", 42);
//  ft_printf("%d\n", 2147483647);
//  ft_printf("%x\n", 505533);
//  ft_printf("%X\n", 505533);
//  ft_printf("%p\n", &ft_printf);
//  ft_printf("%20.15d\n", 54321);
//  ft_printf("%-10d\n", 3);
//  ft_printf("% d\n", 33);
//  ft_printf("%+d\n", 3);
//  ft_printf("%010d\n", 1);
//  ft_printf("%hhd\n", 0);
//  ft_printf("%zd\n", 4294967295);
//  ft_printf("%%\n");
//  ft_printf("%U\n", 4294967295);
//  ft_printf("%u\n", 4294967295);
//  ft_printf("%%#08x\n", 42);
//  ft_printf("%x\n", 1000);
//  ft_printf("%#X\n", 1000);
//  ft_printf("%s\n", NULL);
//  ft_printf("%p\n",b);
//  ft_printf("%p",&a);
//  return (0);
// }
