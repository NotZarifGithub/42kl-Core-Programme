/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:06:42 by mabd-ram          #+#    #+#             */
/*   Updated: 2025/01/08 23:56:25 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	check_map(t_data *data)
{
	check_map_chars(data);
	check_top_bottom_walls(data);
	check_side_walls(data);
	check_player_and_exit(data);
}

void	validate_map(t_data *data)
{
	if (!check_reachable(data))
	{
		ft_printf("Error: Map validation failed.\n");
		exit(EXIT_FAILURE);
	}
	if (!check_for_collectibles(data))
	{
		ft_printf("Error: The map must contain at least one collectible.\n");
		exit(EXIT_FAILURE);
	}
	ft_printf("Map is valid. All collectibles and exit are reachable.\n");
}
