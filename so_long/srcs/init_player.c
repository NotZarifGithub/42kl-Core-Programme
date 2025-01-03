/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 02:06:18 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/11/27 02:06:19 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	find_player_start(t_data *data)
{
	int	row;
	int	column;

	data->player.moves = 0;
	data->player.collectibles = 0;
	row = 0;
	while (data->map.map[row])
	{
		column = 0;
		while (data->map.map[row][column])
		{
			if (data->map.map[row][column] == 'P')
			{
				data->player.x = row;
				data->player.y = column;
				return ;
			}
			column++;
		}
		row++;
	}
}
