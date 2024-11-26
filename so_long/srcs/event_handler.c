/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 02:04:05 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/11/27 02:05:39 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	key_handler(int keycode, t_data *data)
{
	if (keycode == KEY_ESC || keycode == KEY_Q)
	{
		close_window(data);
	}
	else if (keycode == KEY_UP || keycode == KEY_W)
		move_player(data, UP);
	else if (keycode == KEY_DOWN || keycode == KEY_S)
		move_player(data, DOWN);
	else if (keycode == KEY_RIGHT || keycode == KEY_D)
		move_player(data, RIGHT);
	else if (keycode == KEY_LEFT || keycode == KEY_A)
		move_player(data, LEFT);
	return (0);
}

int	close_window(t_data *data)
{
	destroy_images(data);
	mlx_destroy_window(data->mlx_connection, data->mlx_window);
	exit(0);
	return (0);
}

int	is_move_valid(int new_x, int new_y, t_data *data)
{
	char	tile;

	tile = data->map.map[new_x][new_y];
	if (tile == '1')
		return (0);
	if (tile == 'E' && data->player.collectibles < data->map.total_collectibles)
	{
		ft_printf("Collect all items before exiting!\n");
		return (0);
	}
	return (1);
}

void	update_position(int new_x, int new_y, t_data *data)
{
	char	tile;

	tile = data->map.map[new_x][new_y];
	if (tile == 'C')
	{
		data->player.collectibles++;
		data->map.map[new_x][new_y] = '0';
		ft_printf("Collectibles gathered: %d\n", data->player.collectibles);
	}
	else if (tile == 'E')
	{
		ft_printf("You won the game in %d moves!\n", data->player.moves);
		close_window(data);
	}
	else if (tile == 'N')
	{
		ft_printf("Enemy struct. You lose!\n");
		close_window(data);
	}
	data->map.map[data->player.x][data->player.y] = '0';
	data->player.x = new_x;
	data->player.y = new_y;
	data->map.map[new_x][new_y] = 'P';
}

void	move_player(t_data *data, int direction)
{
	int	new_x;
	int	new_y;

	new_x = data->player.x;
	new_y = data->player.y;
	if (direction == UP)
		new_x -= 1;
	else if (direction == DOWN)
		new_x += 1;
	else if (direction == LEFT)
		new_y -= 1;
	else if (direction == RIGHT)
		new_y += 1;
	if (!is_move_valid(new_x, new_y, data))
		return ;
	data->player.moves++;
	update_position(new_x, new_y, data);
	ft_printf("Total moves: %d\n", data->player.moves);
}
