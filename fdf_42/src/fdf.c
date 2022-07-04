/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagg <dbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 21:29:36 by dbagg             #+#    #+#             */
/*   Updated: 2022/01/10 16:55:40 by dbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	set_default(t_dot *param)
{
	param->scale = 30;
	param->z_scale = 1;
	param->is_isometric = 1;
	param->angle = 0.8;
	param->win_x = 1920;
	param->win_y = 1080;
	param->shift_x = param->win_x / 3;
	param->shift_y = param->win_y / 3;
	param->mlx_ptr = mlx_init();
	param->win_ptr = \
	mlx_new_window(param->mlx_ptr, param->win_x, param->win_y, "FDF_MINE");
}

int	main(int argc, char **argv)
{
	t_dot	**matrix;

	if (argc != 2)
		ft_error("используй: ./fdf map.fdf");
	matrix = read_map(*++argv);
	set_default(&matrix[0][0]);
	draw(matrix);
	mlx_key_hook(matrix[0][0].win_ptr, deal_key, matrix);
	mlx_loop(matrix[0][0].mlx_ptr);
}
