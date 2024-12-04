/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_window.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 02:06:26 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/12/03 17:22:52 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	init_window(t_data *data)
{
	if (!data->map.map[0])
	{
		perror("Map data not initialized");
		return (1);
	}
	init(data);
	data->mlx_connection = mlx_init();
	if (!data->mlx_connection)
		return (1);
	data->mlx_window = mlx_new_window(data->mlx_connection,
			data->window_width, data->window_height, "test");
	if (!data->mlx_window)
	{
		perror("Failed to create window!");
		mlx_destroy_display(data->mlx_connection);
		return (1);
	}
	return (0);
}

/* Initialize the 'data' struct, including setting window size */
void	init(t_data *data)
{
	if (data->map.map[0] != NULL)
	{
		data->window_height = data->map.total_line * IMAGE_SIZE;
		data->window_width = (ft_strlen(data->map.map[0]) - 1) * IMAGE_SIZE;
		data->map.total_columns = ft_strlen(data->map.map[0]);
	}
}
