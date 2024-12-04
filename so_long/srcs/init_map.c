/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 02:06:11 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/12/03 16:39:51 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

//Counting the total number of line in .ber file
int	get_line_number(char *path)
{
	int		fd;
	int		total_line;
	char	*line;

	total_line = 0;
	fd = open(path, O_RDONLY);
	if (fd < 0)
	{
		ft_printf("\e[31mERROR: Could not open file!\e[0m\n");
		return (-1);
	}
	line = get_next_line(fd);
	while (line != NULL)
	{
		total_line++;
		free(line);
		line = get_next_line(fd);
	}
	close(fd);
	return (total_line);
}

/* Copy each line of .ber file into 'data->map.map[row]' array */
void	load_map_data(int row, t_data *data)
{
	char	*line;

	line = get_next_line(data->map.fd);
	while (line != NULL)
	{
		line = ft_strtrim(line, "\n");
		if (!line)
		{
			ft_printf("Error: Memory allocation failed while trimming line.\n");
			exit(0);
		}
		data->map.map[row] = ft_strdup(line);
		free(line);
		if (!data->map.map[row])
		{
			ft_printf("Error: Memory allocation failed.\n");
			exit(0);
		}
		row++;
		line = get_next_line(data->map.fd);
	}
	data->map.map[row] = NULL;
}

/* Count the number of collectibles */
void	count_collectibles(t_map *map)
{
	int	row;
	int	column;

	map->total_collectibles = 0;
	row = 0;
	while (map->map[row])
	{
		column = 0;
		while (map->map[row][column])
		{
			if (map->map[row][column] == 'C')
				map->total_collectibles++;
			column++;
		}
		row++;
	}
}

/* 
    Initialize the 'map' data structure by storing 
    each line of .ber file into 'data->map.map' 
*/
void	init_map(char *path, t_data *data)
{
	int	row;

	row = 0;
	data->map.total_line = get_line_number(path);
	if (data->map.total_line == -1)
		return ;
	data->map.map = ft_calloc(data->map.total_line + 1, sizeof(char *));
	if (!data->map.map)
		return ;
	data->map.fd = open(path, O_RDONLY);
	if (data->map.fd < 0)
	{
		perror("\e[31mERROR: Could not open file!\e[0m\n");
		return ;
	}
	load_map_data(row, data);
	close(data->map.fd);
	count_collectibles(&data->map);
	find_player_start(data);
}
