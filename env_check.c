/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-faya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:42:56 by ral-faya          #+#    #+#             */
/*   Updated: 2024/07/29 12:46:34 by ral-faya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "so_long.h"

int	is_surrounded_by_walls(t_var var)
{
	int	i;

	i = 0;
	while (i < var.map.size.width)
	{
		if (var.map.data[0][i] != '1' ||
		var.map.data[var.map.size.height - 1][i] != '1')
			error(&var, "Invalid map: top or down wall not configured");
		i++;
	}
	i = 0;
	while (i < var.map.size.height)
	{
		if (var.map.data[i][0] != '1' ||
		var.map.data[i][var.map.size.width - 1] != '1')
			error(&var, "Invalid map: lateral wall not configured");
		i++;
	}
	return (0);
}

int	is_rectangular(t_var var)
{
	int	i;

	i = 0;
	while (i < var.map.size.height)
	{
		if (ft_strlen1(var.map.data[i]) != var.map.size.width)
			error(&var, "Invalid map: not a retangle");
		i++;
	}
	return (0);
}

int	check_evironment(t_var var)
{
	is_surrounded_by_walls(var);
	is_rectangular(var);
	contains_one_exit(var);
	contains_at_least_one_collectible(var);
	contains_one_starting_position(var);
	contains_only_valid_items(var);
	return (0);
}
