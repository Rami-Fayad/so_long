/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   playermovements.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-faya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 03:11:26 by ral-faya          #+#    #+#             */
/*   Updated: 2024/07/26 03:11:37 by ral-faya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	move_left(t_var *var)
{
	var->map.data[var->img.pos.height][var->img.pos.width] = '0';
	var->img.pos.width -= 1;
	var->map.data[var->img.pos.height][var->img.pos.width] = 'P';
	var->game.count_steps++;
	var->img.spt_path = "./img/sprite2.xpm";
	return (0);
}

int	move_right(t_var *var)
{
	var->map.data[var->img.pos.height][var->img.pos.width] = '0';
	var->img.pos.width += 1;
	var->map.data[var->img.pos.height][var->img.pos.width] = 'P';
	var->game.count_steps++;
	var->img.spt_path = "./img/sprite1.xpm";
	return (0);
}

int	move_down(t_var *var)
{
	var->map.data[var->img.pos.height][var->img.pos.width] = '0';
	var->img.pos.height += 1;
	var->map.data[var->img.pos.height][var->img.pos.width] = 'P';
	var->game.count_steps++;
	var->img.spt_path = "./img/sprite1.xpm";
	return (0);
}

int	move_up(t_var *var)
{
	var->map.data[var->img.pos.height][var->img.pos.width] = '0';
	var->img.pos.height -= 1;
	var->map.data[var->img.pos.height][var->img.pos.width] = 'P';
	var->game.count_steps++;
	var->img.spt_path = "./img/sprite1.xpm";
	return (0);
}

int	movements(int key, t_var *var)
{
	if ((key == A_KEY)
		&& (var->map.data[var->img.pos.height][var->img.pos.width - 1] == 'E'))
		check_collect(var);
	else if ((key == A_KEY)
		&& (var->map.data[var->img.pos.height][var->img.pos.width - 1] != '1'))
		move_left(var);
	if ((key == D_KEY)
		&& (var->map.data[var->img.pos.height][var->img.pos.width + 1] == 'E'))
		check_collect(var);
	else if ((key == D_KEY)
		&& (var->map.data[var->img.pos.height][var->img.pos.width + 1] != '1'))
		move_right(var);
	if ((key == S_KEY)
		&& (var->map.data[var->img.pos.height + 1][var->img.pos.width] == 'E'))
		check_collect(var);
	else if ((key == S_KEY)
		&& (var->map.data[var->img.pos.height + 1][var->img.pos.width] != '1'))
		move_down(var);
	if ((key == W_KEY)
		&& (var->map.data[var->img.pos.height - 1][var->img.pos.width] == 'E'))
		check_collect(var);
	else if ((key == W_KEY)
		&& (var->map.data[var->img.pos.height - 1][var->img.pos.width] != '1'))
		move_up(var);
	return (0);
}
