/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagg <dbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:26:32 by dbagg             #+#    #+#             */
/*   Updated: 2021/11/09 11:26:33 by dbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_strlen(const char *str);
char	*ft_strchr(const char *str, int ch);
int		ft_size_num(long int n);
void	ft_putnbr(long int n);
int		ft_size_num_hex(unsigned long long n);
void	ft_putnbr_hex(unsigned long long n, char c);
int		ft_print_c(va_list ap);
int		ft_print_s(va_list ap);
int		ft_print_diu(va_list	ap, char type);
int		ft_print_p(va_list	ap);
int		ft_print_x(va_list	ap, char a);

#endif
