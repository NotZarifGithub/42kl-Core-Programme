/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 16:24:45 by mabd-ram          #+#    #+#             */
/*   Updated: 2025/01/09 00:02:36 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

// Helper function to check if a cell is valid for flood fill
int	is_valid_cell(t_data *data, int x, int y, int *visited)
{
	size_t	row_length;

	row_length = ft_strlen(data->map.map[x]);
	return (x >= 0 && x < (int)data->map.total_line
		&& y >= 0 && y < (int)row_length
		&& visited[x * row_length + y] == 0
		&& data->map.map[x][y] != '1'
		&& data->map.map[x][y] != 'N');
}

// Flood fill function to mark reachable areas from the player
void	flood_fill(t_data *data, int x, int y, int *visited)
{
	size_t	row_length;
	int		direction_index;
	int		new_x;
	int		new_y;
	int		directions[4][2];	

	directions[4][2] = {
	{0, 1},
	{0, -1},
	{1, 0},
	{-1, 0}
	};
	row_length = ft_strlen(data->map.map[x]);
	direction_index = 0;
	if (!is_valid_cell(data, x, y, visited))
		return ;
	visited[x * row_length + y] = 1;
	while (direction_index < 4)
	{
		new_x = x + directions[direction_index][0];
		new_y = y + directions[direction_index][1];
		flood_fill(data, new_x, new_y, visited);
		direction_index++;
	}
}
