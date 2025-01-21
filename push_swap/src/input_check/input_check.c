/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 22:38:25 by mabd-ram          #+#    #+#             */
/*   Updated: 2025/01/20 13:53:05 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static int	check_for_duplicates(char **args)
{
	int	i;
	int	j;
	int	k;

	i = 1;
	while (args[i])
	{
		j = 1;
		while (args[j])
		{
			if (j != i)
			{
				k = 0;
				while (args[i][k] && args[j][k] && args[i][k] == args[j][k])
					k++;
				if (args[i][k] == '\0' && args[j][k] == '\0')
					return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

static int	check_is_number(char *arg)
{
	int	i;

	i = 0;
	if (arg[i] == '+' || arg[i] == '-')
		i++;
	if (arg[i] == '\0')
		return (0);
	while (arg[i])
	{
		if (arg[i] < '0' || arg[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

static int	check_is_zero(char *arg)
{
	int	i;

	i = 0;
	if (arg[i] == '+' || arg[i] == '-')
		i++;
	while (arg[i] == '0')
		i++;
	return (arg[i] == '\0');
}

int	is_valid_input(char **args)
{
	int	i;
	int	zero_count;

	i = 1;
	zero_count = 0;
	while (args[i])
	{
		if (!check_is_number(args[i]))
			return (0);
		zero_count += check_is_zero(args[i]);
		i++;
	}
	if (zero_count > 1)
		return (0);
	if (check_for_duplicates(args))
		return (0);
	return (1);
}
