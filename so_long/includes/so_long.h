/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 02:19:07 by mabd-ram          #+#    #+#             */
/*   Updated: 2025/01/04 14:21:13 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../mlx/mlx.h" 
# include "../libft/libft.h"
# include "../getnextline/get_next_line.h"
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

//Keybindings
# define KEY_ESC 65307
# define KEY_Q 113
# define KEY_UP 65362
# define KEY_DOWN 65364
# define KEY_RIGHT 65363
# define KEY_LEFT 65361
# define KEY_A 97
# define KEY_D 100
# define KEY_W 119
# define KEY_S 115

//Movement directions
# define UP 0
# define DOWN 1
# define RIGHT 2
# define LEFT 3

//Images settings
# define IMAGE_SIZE 32

//Images paths
# define COIN "images/coin.xpm"
# define PLAYER "images/player.xpm"
# define WALL "images/wall.xpm"
# define CHEST "images/portal.xpm"
# define OPP "images/foe.xpm"
# define GROUND "images/ground.xpm"

//Map Data Structure
typedef struct s_map
{
	int		fd;
	char	**map;
	int		total_collectibles;
	int		total_line;
	int		total_columns;
}	t_map;

//Image Data Structure
typedef struct s_image
{
	void	*ground;
	void	*player;
	void	*wall;
	void	*coin;
	void	*chest;
	void	*opp;
	int		width;
	int		height;
}	t_image;

//Player Data Structure
typedef struct s_player
{
	int	x;
	int	y;
	int	collectibles;
	int	moves;
	int	direction;
}	t_player;

//Game Data Structure
typedef struct s_data
{
	void		*mlx_connection;
	void		*mlx_window;
	int			window_height;
	int			window_width;
	t_map		map;
	t_image		image;
	t_player	player;
}	t_data;

//Functions
int		main(int argc, char **argv);
int		init_window(t_data *data);
int		get_line_number(char *path);
void	load_map_data(int row, t_data *data);
void	init_map(char *path, t_data *data);
void	init(t_data *data);
void	ft_free(char **array);
void	init_images(t_data *data);
void	setup_and_loop_images(t_data *data);
void	destroy_images(t_data *data);
void	place_image(t_data *data, int x_pos, int row, int column);
int		render(t_data *data);
int		key_handler(int keycode, t_data *data);
int		close_window(t_data *data);
int		is_move_valid(int new_x, int new_y, t_data *data);
void	update_position(int new_x, int new_y, t_data *data);
void	move_player(t_data *data, int direction);
void	find_player_start(t_data *data);
void	check_map(t_data *data);
void	check_map_chars(t_data *data);
void	check_top_bottom_walls(t_data *data);
void	check_side_walls(t_data *data);
void	check_player_and_exit(t_data *data);

#endif // ! SO_LONG_H
