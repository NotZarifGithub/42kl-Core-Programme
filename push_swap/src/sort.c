/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 22:40:16 by mabd-ram          #+#    #+#             */
/*   Updated: 2025/01/17 22:40:36 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

/* tiny_sort:
*   Sorts a stack of 3 numbers in 2 or fewer moves. The sorting is done by order
*   rather than value. Example:
*       values:         0    9    2
*       order:        [1]  [3]  [2]
*   Solution, 2 moves:
*   rra:
*       values:         2    0    9
*       order:        [2]  [1]  [3]
*   sa:
*       values:         0    2    9
*       order:        [1]  [2]  [3]
*/
void sort_3num(t_stack **stack)
{
    t_stack *current;
    int max_order;

    if (is_sorted_stack(*stack))
        return ;
    current = *stack;
    max_order = current->order;
    while (current) // Find the highest order in the stack
    {
        if (current->order > max_order)
            max_order = current->order;
        current = current->next;
    }
    if ((*stack)->order == max_order)
        ra(stack); // Equivalent to ra
    else if ((*stack)->next->order == max_order)
        rra(stack); // Equivalent to rra
    if ((*stack)->order > (*stack)->next->order)
        sa(stack); // Equivalent to sa
}

static void push_half_to_b(t_stack **a, t_stack **b)
{
    int total_size;
    int pushed;
    int i;

    total_size = get_stack_size(*a);
    pushed = 0;
    i = 0;

    // Push elements with order <= total_size / 2 to stack_b
    while (i < total_size && pushed < total_size / 2)
    {
        if ((*a)->order <= total_size / 2)
        {
            pb(a, b);
            pushed++;
        }
        else
            ra(a);
        i++;
    }

    // Push additional elements to reduce stack_a to 3 elements
    while (get_stack_size(*a) > 3)
        pb(a, b);
}

static void align_stack_a(t_stack **a)
{
    int lowest_position;
    int stack_size;

    stack_size = get_stack_size(*a);
    lowest_position = find_minimum_index_position(a);

    // Rotate or reverse rotate to bring the lowest value to the top
    if (lowest_position <= stack_size / 2)
    {
        while (lowest_position--)
            ra(a);
    }
    else
    {
        while (lowest_position++ < stack_size)
            rra(a);
    }
}

static void sort_remaining_b(t_stack **a, t_stack **b)
{
    while (*b)
    {
        assign_target_positions(a, b);  // Assign target positions for elements in stack_b
        calculate_move_cost(a, b);       // Calculate the cost for each element
        execute_move(a, b);              // Perform the most cost-effective move
    }
}

void sort_large_stack(t_stack **a, t_stack **b)
{
    // Step 1: Push roughly half of the elements to stack_b
    push_half_to_b(a, b);

    // Step 2: Sort the remaining 3 elements in stack_a
    sort_3num(a);

    // Step 3: Move all elements back to stack_a in sorted order
    sort_remaining_b(a, b);

    // Step 4: Align stack_a so that the smallest element is at the top
    if (!is_sorted_stack(*a))
        align_stack_a(a);
}


