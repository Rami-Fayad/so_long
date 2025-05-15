/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-faya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 11:12:50 by ral-faya          #+#    #+#             */
/*   Updated: 2024/07/29 13:06:39 by ral-faya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	free_maps(t_var *var)
{
	int	row;

	row = 0;
	if (var->mlx && var->win)
	{
		mlx_destroy_window(var->mlx, var->win);
		var->win = NULL;
	}
	if (var->mlx)
	{
		mlx_destroy_display(var->mlx);
		free(var->mlx);
		var->mlx = NULL;
	}
	while (row < var->map.size.height)
	{
		free(var->map.data[row]);
		row++;
	}
	free(var->map.data);
	var->map.data = NULL;
	return (0);
}

/*
int	free_maps(t_var *var)
{
	int	row;

	row = 0;
	if (var->mlx && var->win)
	{
		mlx_destroy_window(var->mlx, var->win);
		var->win = NULL;
	}
	if (var->mlx)
	{
		mlx_destroy_display(var->mlx);
		free(var->mlx);
		var->mlx = NULL;
	}
	while (row < var->map.size.height)
	{
		if (var->map.data[row])
		{
			free(var->map.data[row]);
			var->map.data[row] = NULL;
		}
		row++;
	}
	if (var->map.data)
	{
		free(var->map.data);
		var->map.data = NULL;
	}
	return (0);
}
*/
int	free_map(t_var *var)
{
	int	row;

	row = 0;
	mlx_destroy_window(var->mlx, var->win);
	mlx_destroy_display(var->mlx);
	free(var->mlx);
	while (row < var->map.size.height)
	{
		free(var->map.data[row]);
		row++;
	}
	free(var->map.data);
	return (0);
}

int	free_exit(t_var *var, char *msg)
{
	printf("%s", msg);
	free_map(var);
	exit(0);
}

void	free_visited(int **visited, t_position size)
{
	int	i;

	i = 0;
	while (i < size.height)
	{
		free(visited[i]);
		i++;
	}
	free(visited);
}
