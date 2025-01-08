/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_collectibles.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 23:55:08 by mabd-ram          #+#    #+#             */
/*   Updated: 2025/01/09 00:01:43 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// Helper function to check if there is at least one collectible on the map
int	check_for_collectibles(t_data *data)
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
			if (data->map.map[row][col] == 'C')
			{
				return (1);
			}
			col++;
		}
		row++;
	}
	return (0);
}

// Helper function to check if there is a reachable collectible
int	check_collectibles(t_data *data, int *visited)
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
			if (data->map.map[row][col] == 'C' &&
				visited[row * row_length + col] == 0)
			{
				ft_printf("A collectible is unreachable due to an obstacle!\n");
				return (0);
			}
			col++;
		}
		row++;
	}
	return (1);
}
