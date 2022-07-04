/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagg <dbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:57:11 by dbagg             #+#    #+#             */
/*   Updated: 2021/10/28 20:54:04 by dbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	void *buffer;

	buffer = (void *)malloc(count * size);
	if (!buffer)
		return NULL;
	ft_bzero(buffer,size*count);
	return buffer;
}
