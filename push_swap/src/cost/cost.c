/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 22:37:00 by mabd-ram          #+#    #+#             */
/*   Updated: 2025/01/21 00:30:01 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	calculate_move_cost(t_stack **a, t_stack **b)
{
	t_stack	*current_b;
	int		size_a;
	int		size_b;

	current_b = *b;
	size_a = get_stack_size(*a);
	size_b = get_stack_size(*b);
	while (current_b)
	{
		current_b->cost_b = current_b->position;
		if (current_b->position > size_b / 2)
			current_b->cost_b = (size_b - current_b->position) * -1;
		current_b->cost_a = current_b->target_position;
		if (current_b->target_position > size_a / 2)
			current_b->cost_a = (size_a - current_b->target_position) * -1;
		current_b = current_b->next;
	}
}

void	execute_move(t_stack **a, t_stack **b)
{
	t_stack	*current_b;
	int		lowest_cost;
	int		best_cost_a;
	int		best_cost_b;
	int		total_cost;

	current_b = *b;
	lowest_cost = INT_MAX;
	while (current_b)
	{
		total_cost = num_abs(current_b->cost_a) + num_abs(current_b->cost_b);
		if (total_cost < lowest_cost)
		{
			lowest_cost = total_cost;
			best_cost_a = current_b->cost_a;
			best_cost_b = current_b->cost_b;
		}
		current_b = current_b->next;
	}
	begin_move(a, b, best_cost_a, best_cost_b);
}
