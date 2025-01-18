/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 22:39:43 by mabd-ram          #+#    #+#             */
/*   Updated: 2025/01/18 16:36:50 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void rra(t_stack **stack_a)
{
    t_stack *last;
    t_stack *second_last;

    if (!(*stack_a) || !(*stack_a)->next)
        return;

    last = *stack_a;
    second_last = NULL;
    while (last->next)
    {
        second_last = last;
        last = last->next;
    }
    second_last->next = NULL;
    last->next = *stack_a;
    *stack_a = last;
    write(1, "rra\n", 4);
}

void rrb(t_stack **stack_b)
{
    t_stack *last;
    t_stack *second_last;

    if (!(*stack_b) || !(*stack_b)->next)
        return;

    last = *stack_b;
    second_last = NULL;
    while (last->next)
    {
        second_last = last;
        last = last->next;
    }
    second_last->next = NULL;
    last->next = *stack_b;
    *stack_b = last;
    write(1, "rrb\n", 4);
}

void rrr(t_stack **stack_a, t_stack **stack_b)
{
    rra(stack_a);
    rrb(stack_b);
    write(1, "rr\n", 3);
}
