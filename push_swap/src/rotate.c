/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 17:06:49 by mabd-ram          #+#    #+#             */
/*   Updated: 2025/01/09 21:23:56 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ra(t_list **stack_a)
{
    t_list *temp;
    t_list *last;

    if (!(*stack_a) || !((*stack_a)->next))
        return;
    temp = *stack_a;
    *stack_a = (*stack_a)->next;
    last = ft_lstlast(*stack_a);
    temp->next = NULL;
    last->next = temp;
    write(1, "ra\n", 3);
}

void rb(t_list **stack_b)
{
    t_list *temp;
    t_list *last;

    if (!(*stack_b) || !((*stack_b)->next))
        return;
    temp = *stack_b;
    *stack_b = (*stack_b)->next;
    last = ft_lstlast(*stack_b);
    temp->next = NULL;
    last->next = temp;
    write(1, "rb\n", 3);
}

void rr(t_list **stack_a, t_list **stack_b)
{
    ra(stack_a);
    rb(stack_b);
    write(1, "rr\n", 3);
}
