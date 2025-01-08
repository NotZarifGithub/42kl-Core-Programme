/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 02:06:33 by mabd-ram          #+#    #+#             */
/*   Updated: 2025/01/08 22:47:10 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	main(int argc, char **argv)
{
	t_data	data;

	if (argc == 2)
	{
		init_map(argv[1], &data);
		check_map(&data);
		validate_map(&data);
		init(&data);
		init_window(&data);
		setup_and_loop_images(&data);
		if (data.map.map)
			ft_free(data.map.map);
	}
	return (0);
}
