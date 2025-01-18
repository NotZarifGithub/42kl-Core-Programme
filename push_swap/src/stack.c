/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 22:40:58 by mabd-ram          #+#    #+#             */
/*   Updated: 2025/01/17 22:40:58 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* stack_new:
*	Creates a stack elements with the provided value.
*	Returns the newly created stack element.
*/
t_stack *stack_new(int data)
{
    t_stack *new;

    new = malloc(sizeof * new);
    if (!new)
        return (NULL);
    new->data = data;           // Changed from 'value' to 'data'
    new->order = 0;             // Changed from 'index' to 'order'
    new->position = -1;         // Changed from 'pos' to 'position'
    new->target_position = -1;  // Changed from 'target_pos' to 'target_position'
    new->cost_a = -1;
    new->cost_b = -1;
    new->next = NULL;
    return (new);
}

/* get_stack_size:
*   Returns the number of elements in a stack.
*/
int get_stack_size(t_stack *stack)
{
    int size;

    size = 0;
    if (!stack)
        return (0);
    while (stack)
    {
        stack = stack->next;
        size++;
    }
    return (size);
}

