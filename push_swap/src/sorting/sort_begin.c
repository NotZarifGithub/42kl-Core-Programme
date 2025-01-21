/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_begin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 14:59:34 by mabd-ram          #+#    #+#             */
/*   Updated: 2025/01/20 19:58:24 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	is_sorted_stack(t_stack *stack)
{
	while (stack && stack->next)
	{
		if (stack->data > stack->next->data)
			return (0);
		stack = stack->next;
	}
	return (1);
}

void	begin_sort(t_stack **stack_a, t_stack **stack_b, int stack_size)
{
	if (stack_size == 2)
	{
		if (!is_sorted_stack(*stack_a))
			sa(stack_a);
	}
	else if (stack_size == 3)
	{
		if (!is_sorted_stack(*stack_a))
			sort_3num(stack_a);
	}
	else if (stack_size > 3)
	{
		if (!is_sorted_stack(*stack_a))
			sort_large_stack(stack_a, stack_b);
	}
}
