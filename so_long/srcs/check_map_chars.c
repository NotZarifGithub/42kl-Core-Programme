/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_chars.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 01:14:31 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/12/04 01:16:25 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	check_map_chars(t_data *data)
{
	int		row;
	int		column;
	char	*valid_chars;

	row = 0;
	valid_chars = "01NPEC";
	while (row < data->map.total_line)
	{
		column = 0;
		while (data->map.map[row][column] != '\0')
		{
			if (data->map.map[row][column] == '\n')
			{
				column++;
				continue ;
			}
			if (!ft_strchr(valid_chars, data->map.map[row][column]))
			{
				ft_printf("Error: Invalid character found in map!\n");
				exit(0);
			}
			column++;
		}
		row++;
	}
}

int	count_char_in_map(t_data *data, char target)
{
	int	row;
	int	col;
	int	count;

	row = 0;
	count = 0;
	while (data->map.map[row])
	{
		col = 0;
		while (data->map.map[row][col])
		{
			if (data->map.map[row][col] == target)
				count++;
			col++;
		}
		row++;
	}
	return (count);
}

void	check_player_and_exit(t_data *data)
{
	int	player_count;
	int	exit_count;

	player_count = count_char_in_map(data, 'P');
	exit_count = count_char_in_map(data, 'E');
	if (player_count != 1 || exit_count != 1)
	{
		ft_printf("Error: Map must contain exactly 1 (P) and 1 (E)!\n");
		exit(0);
	}
}
