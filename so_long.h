/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-faya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 11:43:52 by ral-faya          #+#    #+#             */
/*   Updated: 2024/07/29 13:14:00 by ral-faya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "minilibx-linux/mlx.h"
# include "minilibx-linux/mlx_int.h"
# include <fcntl.h>
# include <stddef.h>
# include <stdlib.h>
# include "get_next_line/get_next_line.h"
# include "libft/libft.h"

# define RESET   "\x1B[0m"
# define BRIGHT  "\x1B[97m" // Bright white text color
# define RED_BG  "\x1B[41m"

# define A_KEY					97
# define W_KEY					119
# define S_KEY					115
# define D_KEY					100
# define ESC					65307
# define SPRITE_H				64
# define SPRITE_W				64
# define X_EVENT_KEY_PRESS		2
# define X_EVENT_KEY_EXIT		17

typedef struct l_position
{
	int	width;
	int	height;
}	t_position;

typedef struct l_map
{
	t_position	size;
	char		**data;
}	t_map;

typedef struct l_img
{
	void		*img_ptr;
	char		*spt_path;
	t_position	size;
	t_position	pos;
	int			size_line;
	void		*data;
}	t_imgg;

typedef struct k_game
{
	int			count_collec;
	int			count_steps;
}	t_game;

typedef struct s_var
{
	void		*mlx;
	void		*win;
	t_game		game;
	t_map		map;
	t_imgg		img;
}	t_var;

int			init(t_var *var);
int			check_args(int argc, char **argv);
int			ft_expose(t_var *var);
int			is_surrounded_by_walls(t_var var);
int			is_rectangular(t_var var);
int			contains_one_exit(t_var var);
int			contains_at_least_one_collectible(t_var var);
int			contains_one_starting_position(t_var var);
int			contains_only_valid_items(t_var var);
t_position	find_starting_position(char **data, t_position size);
void		handle_error(t_var *var, char type, int **visited);
void		check_pathandcollectibles(t_var var, int **visited);

int			has_valid_paths(t_var var);
int			check_evironment(t_var var);
int			check_map(t_var var);
int			count_lines(char *filename);
void		read_map_data(t_var *var, char *filename);
int			get_map(t_var *var, char **argv);
int			load_map(t_var var, int row, int col);
int			print_map(t_var var);
int			error(t_var *var, char *msg);
int			errors(char *msg);
void		depth_search(char **data, t_position current,
				t_position size, int **visited);
void		errorss(t_var *var, char *msg, int **visited, t_position size);
int			get_init_position(t_var *var);
int			count_collec(t_var *var);
int			check_collect(t_var *var);
int			print_steps(t_var *var);
int			move_left(t_var *var);
int			move_right(t_var *var);
int			move_down(t_var *var);
int			move_up(t_var *var);
int			movements(int key, t_var *var);
int			mlx_close(t_var *var);
int			key_press(int key, t_var *var);
int			free_map(t_var *var);
int			free_maps(t_var *var);
int			free_exit(t_var *var, char *msg);
void		free_visited(int **visited, t_position size);
void		cleanup(t_var *var);

#endif
