/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_image.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 02:06:01 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/11/28 16:08:12 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	init_images(t_data *data)
{
	if (!data || !data->mlx_connection)
		return ;
	data->image.chest = mlx_xpm_file_to_image(data->mlx_connection,
			CHEST, &data->image.width, &data->image.height);
	data->image.coin = mlx_xpm_file_to_image(data->mlx_connection,
			COIN, &data->image.width, &data->image.height);
	data->image.ground = mlx_xpm_file_to_image(data->mlx_connection,
			GROUND, &data->image.width, &data->image.height);
	data->image.player = mlx_xpm_file_to_image(data->mlx_connection,
			PLAYER, &data->image.width, &data->image.height);
	data->image.wall = mlx_xpm_file_to_image(data->mlx_connection,
			WALL, &data->image.width, &data->image.height);
	data->image.opp = mlx_xpm_file_to_image(data->mlx_connection,
			OPP, &data->image.width, &data->image.height);
}

void	setup_and_loop_images(t_data *data)
{
	if (!data->mlx_connection || !data->mlx_window)
		return ;
	init_images(data);
	mlx_key_hook(data->mlx_window, key_handler, data);
	mlx_hook(data->mlx_window, 17, 0, close_window, data);
	mlx_loop_hook(data->mlx_connection, render, data);
	mlx_loop(data->mlx_connection);
	destroy_images(data);
}

void	destroy_images(t_data *data)
{
	if (!data || !data->mlx_connection)
		return ;
	if (data->image.chest)
		mlx_destroy_image(data->mlx_connection, data->image.chest);
	if (data->image.coin)
		mlx_destroy_image(data->mlx_connection, data->image.coin);
	if (data->image.ground)
		mlx_destroy_image(data->mlx_connection, data->image.ground);
	if (data->image.player)
		mlx_destroy_image(data->mlx_connection, data->image.player);
	if (data->image.wall)
		mlx_destroy_image(data->mlx_connection, data->image.wall);
	if (data->image.opp)
		mlx_destroy_image(data->mlx_connection, data->image.opp);
	mlx_destroy_display(data->mlx_connection);
}

void	place_image(t_data *data, int x_pos, int row, int column)
{
	void	*image;

	image = NULL;
	if (data->map.map[row][column] == '1')
		image = data->image.wall;
	else if (data->map.map[row][column] == '0')
		image = data->image.ground;
	else if (data->map.map[row][column] == 'P')
		image = data->image.player;
	else if (data->map.map[row][column] == 'E')
		image = data->image.chest;
	else if (data->map.map[row][column] == 'C')
		image = data->image.coin;
	else if (data->map.map[row][column] == 'N')
		image = data->image.opp;
	if (image)
		mlx_put_image_to_window(data->mlx_connection, data->mlx_window,
			image, x_pos, row * IMAGE_SIZE);
}

int	render(t_data *data)
{
	int	x_pos;
	int	row;
	int	column;

	if (!data || !data->mlx_window || !data->map.map)
		return (1);
	row = 0;
	while (data->map.map[row])
	{
		column = 0;
		x_pos = 0;
		while (data->map.map[row][column] && data->map.map[row][column] != '\n')
		{
			place_image(data, x_pos, row, column);
			x_pos += IMAGE_SIZE;
			column++;
		}
		row++;
	}
	return (0);
}
