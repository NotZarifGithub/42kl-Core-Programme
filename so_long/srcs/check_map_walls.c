/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_walls.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 01:13:32 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/12/04 01:13:55 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	check_top_bottom_walls(t_data *data)
{
	int	column;
	int	last_row;

	column = 0;
	last_row = data->map.total_line - 1;
	while (data->map.map[0][column] && data->map.map[last_row][column])
	{
		if (data->map.map[0][column] != '1' ||
			data->map.map[last_row][column] != '1')
		{
			ft_printf("Error: Top/Bottom must be fully enclosed by walls!\n");
			exit(0);
		}
		column++;
	}
}

void	check_side_walls(t_data *data)
{
	int	row;
	int	last_column;

	row = 0;
	last_column = ft_strlen(data->map.map[0]) - 1;
	while (data->map.map[row])
	{
		if (data->map.map[row][0] != '1' ||
			data->map.map[row][last_column] != '1')
		{
			ft_printf("Error: Side must be fully enclosed by walls!\n");
			exit(0);
		}
		row++;
	}
}
