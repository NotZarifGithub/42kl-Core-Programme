/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 17:06:45 by mabd-ram          #+#    #+#             */
/*   Updated: 2025/01/09 20:57:26 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void pa(t_list **stack_a, t_list **stack_b)
{
    t_list *temp;

    if (!(*stack_b))
        return;
    temp = *stack_b;
    *stack_b = (*stack_b)->next;
    temp->next = *stack_a;
    *stack_a = temp;
    write(1, "pa\n", 3);
}

void pb(t_list **stack_a, t_list **stack_b)
{
    t_list *temp;

    if (!(*stack_a))
        return;
    temp = *stack_a;
    *stack_a = (*stack_a)->next;
    temp->next = *stack_b;
    *stack_b = temp;
    write(1, "pb\n", 3);
}
