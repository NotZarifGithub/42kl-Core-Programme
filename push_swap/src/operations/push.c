/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 22:39:33 by mabd-ram          #+#    #+#             */
/*   Updated: 2025/01/18 16:36:42 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/* push:
*	Pushes the top element of src stack to the top of dest stack.
*/
void pa(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *temp;

    if (!(*stack_b))
        return;
    temp = *stack_b;
    *stack_b = (*stack_b)->next;
    temp->next = *stack_a;
    *stack_a = temp;
    write(1, "pa\n", 3);
}

void pb(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *temp;

    if (!(*stack_a))
        return;
    temp = *stack_a;
    *stack_a = (*stack_a)->next;
    temp->next = *stack_b;
    *stack_b = temp;
    write(1, "pb\n", 3);
}

