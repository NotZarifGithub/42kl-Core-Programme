/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialization.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 22:37:35 by mabd-ram          #+#    #+#             */
/*   Updated: 2025/01/18 16:35:57 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack *fill_stack(int argc, char **argv)
{
    t_stack *stack_a;
    t_stack *tail;
    t_stack *new_node;
    long int num;
    int i;

    stack_a = NULL;
    tail = NULL;
    i = 1;
    while (i < argc)
    {
        num = ft_atol(argv[i]);
        if (num > INT_MAX || num < INT_MIN)
            exit_error(&stack_a, NULL);
        new_node = stack_new((int)num);
        if (!new_node)
            exit_error(&stack_a, NULL);
        if (!stack_a)
            stack_a = new_node;
        else
            tail->next = new_node;
        tail = new_node;
        i++;
    }
    return (stack_a);
}

/* assign_index:
*	Assigns an index to each value in stack a. This is a convenient way to order
*	the stack because indexes can be checked and compared instead of actual values,
*	which may or may not be adjacent to each other.
*		ex. values:		-3	 0	 9	 2
*		indexes:		[1]	[2]	[4]	[3]
*	The indexes are assigned from highest (stack_size) to lowest (1).
*/
void set_index(t_stack *list_a, int list_size)
{
    t_stack *node;
    t_stack *max_node;
    int current_value;

    while (--list_size > 0)
    {
        node = list_a;
        current_value = INT_MIN;
        max_node = NULL;
        while (node)
        {
            if (node->data == INT_MIN && node->order == 0)  // Changed from 'value' to 'data' and 'index' to 'order'
                node->order = 1;
            if (node->data > current_value && node->order == 0)  // Changed from 'value' to 'data' and 'index' to 'order'
            {
                current_value = node->data;
                max_node = node;
                node = list_a;
            }
            else
                node = node->next;
        }
        if (max_node != NULL)
            max_node->order = list_size;  // Changed from 'index' to 'order'
    }
}


