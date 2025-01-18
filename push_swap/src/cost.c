/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 22:37:00 by mabd-ram          #+#    #+#             */
/*   Updated: 2025/01/17 22:37:39 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "push_swap.h"

void calculate_move_cost(t_stack **a, t_stack **b)
{
    t_stack *current_a;
    t_stack *current_b;
    int size_a;
    int size_b;

    current_a = *a;
    current_b = *b;
    size_a = get_stack_size(current_a);
    size_b = get_stack_size(current_b);

    while (current_b)
    {
        current_b->cost_b = current_b->position;  // Initial cost based on position in stack B
        if (current_b->position > size_b / 2)
        {
            current_b->cost_b = (size_b - current_b->position) * -1;  // Reverse the cost if it's closer to the bottom of stack B
        }

        current_b->cost_a = current_b->target_position;  // Initial cost based on target position in stack A
        if (current_b->target_position > size_a / 2)
        {
            current_b->cost_a = (size_a - current_b->target_position) * -1;  // Reverse the cost if it's closer to the bottom of stack A
        }

        current_b = current_b->next;  // Move to the next element in stack B
    }
}
void execute_move(t_stack **a, t_stack **b)
{
    t_stack *current_b;
    int lowest_cost;
    int best_cost_a;
    int best_cost_b;
    int total_cost;

    current_b = *b;
    lowest_cost = INT_MAX;  // Initialize with a very high value

    while (current_b)
    {
        total_cost = abs(current_b->cost_a) + abs(current_b->cost_b);  // Calculate the total cost
        if (total_cost < abs(lowest_cost))  // Compare with the lowest cost found so far
        {
            lowest_cost = total_cost;
            best_cost_a = current_b->cost_a;  // Save the best cost for stack A
            best_cost_b = current_b->cost_b;  // Save the best cost for stack B
        }
        current_b = current_b->next;  // Move to the next element in stack B
    }
    begin_move(a, b, best_cost_a, best_cost_b);  // Perform the best move
}


