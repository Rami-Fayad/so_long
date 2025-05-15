/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-faya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 11:43:39 by ral-faya          #+#    #+#             */
/*   Updated: 2024/07/25 11:43:45 by ral-faya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	init(t_var *var)
{
	var->mlx = NULL;
	var->win = NULL;
	var->game.count_collec = 0;
	var->game.count_steps = 0;
	var->map.data = NULL;
	var->map.size.height = 0;
	var->map.size.width = 0;
	var->img.img_ptr = NULL;
	var->img.spt_path = "./img/sprite.xpm";
	var->img.size.width = 0;
	var->img.size.height = 0;
	var->img.pos.width = 0;
	var->img.pos.height = 0;
	var->img.data = NULL;
	var->img.size_line = 0;
	return (0);
}

int	check_args(int argc, char **argv)
{
	if (argc < 2)
		errors("Provide map name and extension as argument\n\
Ex: ./so_long maps/map.ber");
	if (argc > 2)
		errors("Too many arguments. Provide only map name and extension\n\
Ex: ./so_long maps/map.ber");
	if (ft_strstr(argv[1], ".ber") == NULL)
		errors("Invalid map extension. Use .ber");
	return (0);
}

int	ft_expose(t_var *var)
{
	print_map(*var);
	print_steps(var);
	return (0);
}

int	main(int argc, char **argv)
{
	t_var	var;

	init(&var);
	check_args(argc, argv);
	get_map(&var, argv);
	check_map(var);
	var.mlx = mlx_init();
	if (var.mlx == NULL)
		errors("Failed to initialize MiniLibX");
	var.win = mlx_new_window(var.mlx, var.map.size.width
			* SPRITE_W, var.map.size.height * SPRITE_H, "So long");
	if (var.win == NULL)
	{
		free_map(&var);
		errors("Failed to create window");
	}
	get_init_position(&var);
	count_collec(&var);
	print_map(var);
	mlx_hook(var.win, X_EVENT_KEY_PRESS, 1L << 0, key_press, &var);
	mlx_hook(var.win, X_EVENT_KEY_EXIT, 1L << 0, mlx_close, &var);
	mlx_expose_hook(var.win, ft_expose, &var);
	mlx_loop(var.mlx);
	free_map(&var);
	return (0);
}
