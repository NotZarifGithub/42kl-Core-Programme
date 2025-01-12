/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_reachable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 23:59:40 by mabd-ram          #+#    #+#             */
/*   Updated: 2025/01/09 00:02:08 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_reachable(t_data *data)
{
	int	*visited;
	int	player_x;
	int	player_y;

	player_x = data->player.x;
	player_y = data->player.y;
	visited = ft_calloc(data->map.total_line
			* ft_strlen(data->map.map[0]), sizeof(int));
	if (!visited)
	{
		ft_printf("Memory allocation failed.\n");
		return (0);
	}
	flood_fill(data, player_x, player_y, visited);
	if (!check_collectibles(data, visited) || !check_exit(data, visited))
	{
		free(visited);
		return (0);
	}
	free(visited);
	return (1);
}

int	check_exit(t_data *data, int *visited)
{
	int		row;
	int		col;
	size_t	row_length;

	row = 0;
	while (row < data->map.total_line)
	{
		row_length = ft_strlen(data->map.map[row]);
		col = 0;
		while (col < (int)row_length)
		{
			if (data->map.map[row][col] == 'E' &&
				visited[row * row_length + col] == 0)
			{
				ft_printf("The exit is unreachable due to an obstacle!\n");
				free(visited);
				return (0);
			}
			col++;
		}
		row++;
	}
	return (1);
}
