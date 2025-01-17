/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 22:41:06 by mabd-ram          #+#    #+#             */
/*   Updated: 2025/01/17 22:41:07 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sa(t_stack **stack_a)
{
    t_stack *temp;

    if (!(*stack_a) || !((*stack_a)->next))
        return;
    temp = *stack_a;
    *stack_a = (*stack_a)->next;
    temp->next = (*stack_a)->next;
    (*stack_a)->next = temp;
    write(1, "sa\n", 3);
}

void sb(t_stack **stack_b)
{
    t_stack *temp;

    if (!(*stack_b) || !((*stack_b)->next))
        return;
    temp = *stack_b;
    *stack_b = (*stack_b)->next;
    temp->next = (*stack_b)->next;
    (*stack_b)->next = temp;
    write(1, "sb\n", 3);
}

void ss(t_stack **stack_a, t_stack **stack_b)
{
    sa(stack_a);
    sb(stack_b);
    write(1, "ss\n", 3);
}
