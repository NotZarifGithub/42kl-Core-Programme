/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 22:37:09 by mabd-ram          #+#    #+#             */
/*   Updated: 2025/01/17 22:37:15 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* do_rev_rotate_both:
*	Reverse rotates both stack A and B until one of them is in position.
*	The given cost is negative since both positions are in the bottom half
*	of their respective stacks. The cost is increased as the stacks are
*	rotated, when one reaches 0, the stack has been rotated as far as possible
*	and the top position is correct.
*/
static void	do_rev_rotate_both(t_stack **a, t_stack **b,
												int *cost_a, int *cost_b)
{
	while (*cost_a < 0 && *cost_b < 0)
	{
		(*cost_a)++;
		(*cost_b)++;
		rrr(a, b);
	}
}

/* do_rotate_both:
*	Rotates both stack A and B until one of them is in position.
*	The given cost is positive since both positions are in the top half
*	of their respective stacks. The cost is decreased as the stacks are
*	rotated, when one reaches 0, the stack has been rotated as far as possible
*	and the top position is correct.
*/
static void	do_rotate_both(t_stack **a, t_stack **b, int *cost_a, int *cost_b)
{
	while (*cost_a > 0 && *cost_b > 0)
	{
		(*cost_a)--;
		(*cost_b)--;
		rr(a, b);
	}
}

/* do_rotate_a:
*	Rotates stack A until it is in position. If the cost is negative,
*	the stack will be reverse rotated, if it is positive, it will be 
*	rotated.
*/
static void	do_rotate_a(t_stack **a, int *cost)
{
	while (*cost)
	{
		if (*cost > 0)
		{
			ra(a);
			(*cost)--;
		}
		else if (*cost < 0)
		{
			rra(a);
			(*cost)++;
		}
	}
}

/* do_rotate_b:
*	Rotates stack B until it is in position. If the cost is negative,
*	the stack will be reverse rotated, if it is positive, it will be 
*	rotated.
*/
static void	do_rotate_b(t_stack **b, int *cost)
{
	while (*cost)
	{
		if (*cost > 0)
		{
			rb(b);
			(*cost)--;
		}
		else if (*cost < 0)
		{
			rrb(b);
			(*cost)++;
		}
	}
}

/* do_move:
*	Chooses which move to make to get the B stack element to the correct
*	position in stack A.
*	If the costs of moving stack A and B into position match (i.e. both negative
*	of both positive), both will be	rotated or reverse rotated at the same time.
*	They might also be rotated separately, before finally pushing the top B element
*	to the top stack A.
*/
void	do_move(t_stack **a, t_stack **b, int cost_a, int cost_b)
{
	if (cost_a < 0 && cost_b < 0)
		do_rev_rotate_both(a, b, &cost_a, &cost_b);
	else if (cost_a > 0 && cost_b > 0)
		do_rotate_both(a, b, &cost_a, &cost_b);
	do_rotate_a(a, &cost_a);
	do_rotate_b(b, &cost_b);
	pa(a, b);
}
