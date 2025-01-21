/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 14:09:56 by mabd-ram          #+#    #+#             */
/*   Updated: 2025/01/20 14:23:36 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	assign_positions(t_stack **stack)
{
	t_stack	*current_node;
	int		position;

	current_node = *stack;
	position = 0;
	while (current_node)
	{
		current_node->position = position++;
		current_node = current_node->next;
	}
}

int	find_minimum_position(t_stack *stack)
{
	int	min_order;
	int	min_position;

	min_order = INT_MAX;
	min_position = -1;
	while (stack)
	{
		if (stack->order < min_order)
		{
			min_order = stack->order;
			min_position = stack->position;
		}
		stack = stack->next;
	}
	return (min_position);
}

int	find_best_higher_position(t_stack *stack, int b_order)
{
	int	closest_order;
	int	best_position;

	closest_order = INT_MAX;
	best_position = -1;
	while (stack)
	{
		if (stack->order > b_order && stack->order < closest_order)
		{
			closest_order = stack->order;
			best_position = stack->position;
		}
		stack = stack->next;
	}
	return (best_position);
}
