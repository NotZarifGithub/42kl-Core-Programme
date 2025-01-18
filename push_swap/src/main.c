/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 22:39:08 by mabd-ram          #+#    #+#             */
/*   Updated: 2025/01/17 22:39:08 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* is_sorted:
*	Checks if a stack is sorted.
*	Returns 0 if the stack is not sorted, 1 if it is sorted.
*/
int is_sorted_stack(t_stack *stack)
{
    while (stack && stack->next)
    {
        if (stack->data > stack->next->data)  // Using 'data' instead of 'value'
            return (0);
        stack = stack->next;
    }
    return (1);
}

/* begin_sort:
*  - For 2 elements, directly checks for sorted state and swaps if needed.
*  - For 3 elements, uses sort_3num to handle sorting efficiently.
*  - For larger stacks, utilizes more efficient sorting for bigger groups.
*/
static void begin_sort(t_stack **stack_a, t_stack **stack_b, int stack_size)
{
    if (stack_size == 2)
    {
        if (!is_sorted_stack(*stack_a))
            sa(stack_a); // Swap if the stack is not sorted
    }
    else if (stack_size == 3)
    {
        if (!is_sorted_stack(*stack_a))
            sort_3num(stack_a); // Use sort_3num to handle 3-element sorting
    }
    else if (stack_size > 3)
    {
        if (!is_sorted_stack(*stack_a))
            sort_large_stack(stack_a, stack_b); // Handle larger stacks
    }
}

/* main:
*   Checks if the input is correct, in which case it initializes stacks a and b,
*   assigns each value indexes and sorts the stacks. When sorting is done, frees
*   the stacks and exits.
*/
int main(int ac, char **av)
{
    t_stack *stack_a;
    t_stack *stack_b;
    int stack_size;

    if (ac < 2)
        return (0);
    if (!is_valid_input(av))
        exit_error(NULL, NULL);
    stack_b = NULL;
    stack_a = fill_stack(ac, av);
    stack_size = get_stack_size(stack_a);
    set_index(stack_a, stack_size + 1);  // Sets 'order' in the stack
    begin_sort(&stack_a, &stack_b, stack_size);
    free_stack(&stack_a);
    free_stack(&stack_b);
    return (0);
}
