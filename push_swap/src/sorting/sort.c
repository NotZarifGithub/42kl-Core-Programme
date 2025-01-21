/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 22:40:16 by mabd-ram          #+#    #+#             */
/*   Updated: 2025/01/21 00:32:14 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_3num(t_stack **stack)
{
	t_stack	*current;
	int		max_order;

	if (is_sorted_stack(*stack))
		return ;
	current = *stack;
	max_order = current->order;
	while (current)
	{
		if (current->order > max_order)
			max_order = current->order;
		current = current->next;
	}
	if ((*stack)->order == max_order)
		ra(stack);
	else if ((*stack)->next->order == max_order)
		rra(stack);
	if ((*stack)->order > (*stack)->next->order)
		sa(stack);
}

static void	push_half_to_b(t_stack **a, t_stack **b)
{
	int	total_size;
	int	pushed;
	int	i;

	total_size = get_stack_size(*a);
	pushed = 0;
	i = 0;
	while (i < total_size && pushed < total_size / 2)
	{
		if ((*a)->order <= total_size / 2)
		{
			pb(a, b);
			pushed++;
		}
		else
			ra(a);
		i++;
	}
	while (get_stack_size(*a) > 3)
		pb(a, b);
}

static void	align_stack_a(t_stack **a)
{
	int	lowest_position;
	int	stack_size;

	stack_size = get_stack_size(*a);
	lowest_position = find_minimum_index_position(a);
	if (lowest_position <= stack_size / 2)
	{
		while (lowest_position--)
			ra(a);
	}
	else
	{
		while (lowest_position++ < stack_size)
			rra(a);
	}
}

static void	sort_remaining_b(t_stack **a, t_stack **b)
{
	while (*b)
	{
		assign_target_positions(a, b);
		calculate_move_cost(a, b);
		execute_move(a, b);
	}
}

void	sort_large_stack(t_stack **a, t_stack **b)
{
	push_half_to_b(a, b);
	sort_3num(a);
	sort_remaining_b(a, b);
	if (!is_sorted_stack(*a))
		align_stack_a(a);
}
