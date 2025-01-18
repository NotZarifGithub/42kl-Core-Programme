/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 22:39:17 by mabd-ram          #+#    #+#             */
/*   Updated: 2025/01/17 22:39:17 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <limits.h>

/* assign_positions:
*   Assigns position values to the nodes in the stack, starting from 0.
*/
static void assign_positions(t_stack **stack)
{
    t_stack *current_node;
    int position;

    current_node = *stack;
    position = 0;
    while (current_node)
    {
        current_node->position = position++;  // Assign position (position) to each node
        current_node = current_node->next;
    }
}


/* find_minimum_index_position:
*   Finds and returns the position of the node with the smallest index in the stack.
*/
int find_minimum_index_position(t_stack **stack)
{
    t_stack *current_node;
    int minimum_order;
    int minimum_position;

    current_node = *stack;
    minimum_order = INT_MAX;
    assign_positions(stack);  // Ensure positions are updated.
    minimum_position = current_node->position;  // Get the position of the node with smallest order

    // Traverse the stack to find the node with the minimum order.
    while (current_node)
    {
        if (current_node->order < minimum_order)  // Check for smaller order (index)
        {
            minimum_order = current_node->order;
            minimum_position = current_node->position;  // Return the position of the node with the smallest order
        }
        current_node = current_node->next;
    }
    return minimum_position;
}


/* calculate_target_position:
*   Calculates the best position in stack A for a node from stack B.
*   It checks if the node from B can be placed in between two nodes in stack A.
*   If no such position exists, it selects the position of the smallest index in A.
*/
static int calculate_target_position(t_stack **a, int b_order)
{
    t_stack *current_node_a;
    int best_target_position;
    int closest_higher_order;

    current_node_a = *a;
    best_target_position = -1;
    closest_higher_order = INT_MAX;

    // Look for a position where the element in B can fit between two nodes in A.
    while (current_node_a)
    {
        if (current_node_a->order > b_order && current_node_a->order < closest_higher_order)
        {
            closest_higher_order = current_node_a->order;
            best_target_position = current_node_a->position;  // Best position based on conditions
        }
        current_node_a = current_node_a->next;
    }

    // If no fitting position found, select the position of the smallest element in A.
    if (best_target_position == -1)
    {
        current_node_a = *a;
        while (current_node_a)
        {
            if (current_node_a->order < closest_higher_order)
            {
                closest_higher_order = current_node_a->order;
                best_target_position = current_node_a->position;  // Smallest element's position
            }
            current_node_a = current_node_a->next;
        }
    }

    return best_target_position;
}


/* assign_target_positions:
*   Assigns a target position in stack A for each node in stack B.
*   The target position is the spot in stack A where the node from B should go.
*/
void assign_target_positions(t_stack **a, t_stack **b)
{
    t_stack *current_node_b;
    int target_position;

    current_node_b = *b;
    
    // Ensure positions are updated for both stacks.
    assign_positions(a);  // Assign positions for stack A
    assign_positions(b);  // Assign positions for stack B

    while (current_node_b)
    {
        // Calculate and assign the target position for each node in stack B
        target_position = calculate_target_position(a, current_node_b->order);
        current_node_b->target_position = target_position;  // Assign target position (target_position)
        current_node_b = current_node_b->next;
    }
}

