/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eventlistener.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-faya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 03:10:08 by ral-faya          #+#    #+#             */
/*   Updated: 2024/07/26 04:02:34 by ral-faya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	mlx_close(t_var *var)
{
	free_exit(var, "Game closed! (X)\n");
	return (0);
}

int	key_press(int key, t_var *var)
{
	int	init_steps;

	init_steps = var->game.count_steps;
	if (key == ESC)
		free_exit(var, "Game closed! (ESC)\n");
	else
		movements(key, var);
	if (init_steps != var->game.count_steps)
		printf(BRIGHT RED_BG "Rami, you’ve stepped %d so far!! "
			RESET "\n", var->game.count_steps);
	print_map(*var);
	print_steps(var);
	return (0);
}
