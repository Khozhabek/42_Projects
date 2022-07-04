/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagg <dbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 21:31:03 by dbagg             #+#    #+#             */
/*   Updated: 2022/01/09 21:31:04 by dbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int	ft_printf(const char *format, ...);
int	ft_process(const char *format, va_list ap);
int	ft_put_c(char c);
int	ft_put_d(int n);
int	ft_put_p(unsigned long long int n);
int	ft_put_s(char *s);
int	ft_put_u(unsigned int n);
int	ft_put_x(unsigned int n, char upper);

#endif
