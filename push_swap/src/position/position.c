/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 22:39:17 by mabd-ram          #+#    #+#             */
/*   Updated: 2025/01/20 20:25:47 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	find_minimum_index_position(t_stack **stack)
{
	assign_positions(stack);
	return (find_minimum_position(*stack));
}

static int	calculate_target_position(t_stack **a, int b_order)
{
	t_stack	*stack_a;
	int		best_position;

	stack_a = *a;
	best_position = find_best_higher_position(stack_a, b_order);
	if (best_position == -1)
		best_position = find_minimum_position(stack_a);
	return (best_position);
}

void	assign_target_positions(t_stack **a, t_stack **b)
{
	t_stack	*current_node_b;

	assign_positions(a);
	assign_positions(b);
	current_node_b = *b;
	while (current_node_b)
	{
		current_node_b->target_position = calculate_target_position(a,
				current_node_b->order);
		current_node_b = current_node_b->next;
	}
}
