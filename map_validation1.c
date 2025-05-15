/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_validation1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-faya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 11:42:39 by ral-faya          #+#    #+#             */
/*   Updated: 2024/07/29 13:11:56 by ral-faya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	contains_only_valid_items(t_var var)
{
	int	i;
	int	j;

	i = 0;
	while (i < var.map.size.height)
	{
		j = 0;
		while (j < var.map.size.width)
		{
			if (var.map.data[i][j] != '1' && var.map.data[i][j] != '0' &&
			var.map.data[i][j] != 'E' && var.map.data[i][j] != 'P' &&
			var.map.data[i][j] != 'C')
				error(&var, "Invalid map: unknown item detected");
			j++;
		}
		i++;
	}
	return (0);
}

int	contains_one_exit(t_var var)
{
	int	exit_count;
	int	i;
	int	j;

	exit_count = 0;
	i = 0;
	while (i < var.map.size.height)
	{
		j = 0;
		while (j < var.map.size.width)
		{
			if (var.map.data[i][j] == 'E')
			{
				exit_count++;
				if (exit_count > 1)
					error(&var, "Invalid map: more than  one E detected");
			}
			j++;
		}
		i++;
	}
	if (exit_count == 0)
		error(&var, "Invalid map: no E detected");
	return (0);
}

int	contains_at_least_one_collectible(t_var var)
{
	int	i;
	int	j;

	i = 0;
	while (i < var.map.size.height)
	{
		j = 0;
		while (j < var.map.size.width)
		{
			if (var.map.data[i][j] == 'C')
				return (1);
			j++;
		}
		i++;
	}
	error(&var, "invalid map : no collectibles detected");
	return (0);
}

int	contains_one_starting_position(t_var var)
{
	int	start_count;
	int	i;
	int	j;

	start_count = 0;
	i = 0;
	while (i < var.map.size.height)
	{
		j = 0;
		while (j < var.map.size.width)
		{
			if (var.map.data[i][j] == 'P')
				start_count++;
			j++;
		}
		i++;
	}
	if (start_count == 0)
		error(&var, "Invalid map: no starting position detected");
	if (start_count > 1)
		error(&var, "Invalid map: more than  one P detected");
	return (0);
}
