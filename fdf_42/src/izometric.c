/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   izometric.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagg <dbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 21:30:10 by dbagg             #+#    #+#             */
/*   Updated: 2022/01/10 11:56:52 by dbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	isometric(t_dot *dot, double angle)
{
	dot->x = (dot->x - dot->y) * cos(angle);
	dot->y = (dot->x + dot->y) * sin(angle) - dot->z;
}
