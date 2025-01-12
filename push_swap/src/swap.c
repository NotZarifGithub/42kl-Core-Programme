/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 17:06:41 by mabd-ram          #+#    #+#             */
/*   Updated: 2025/01/09 18:50:18 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sa(t_list **stack_a)
{
    t_list *temp;

    if (!(*stack_a) || !((*stack_a)->next))
        return;
    temp = *stack_a;
    *stack_a = (*stack_a)->next;
    temp->next = (*stack_a)->next;
    (*stack_a)->next = temp;
    write(1, "sa\n", 3);
}

void sb(t_list **stack_b)
{
    t_list *temp;

    if (!*stack_b || !((*stack_b)->next))
        return;
    temp = *stack_b;
    *stack_b = (*stack_b)->next;
    temp->next = (*stack_b)->next;
    (*stack_b)->next = temp;
    write(1, "sb\n", 3);
}

void ss(t_list **stack_a, t_list **stack_b)
{
    sa(stack_a);
    sb(stack_b);
    write(1, "ss\n", 3);
}
