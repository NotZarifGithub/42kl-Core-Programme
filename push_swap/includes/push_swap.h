/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 17:25:34 by mabd-ram          #+#    #+#             */
/*   Updated: 2025/01/17 22:32:54 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>

typedef struct s_stack
{
    int             data;           // Replaces 'value'
    int             order;          // Replaces 'index'
    int             position;       // Replaces 'pos'
    int             target_position; // Replaces 'target_pos'
    int             cost_a;    // Replaces 'cost_a'
    int             cost_b;    // Replaces 'cost_b'
    struct s_stack  *next;           // Replaces 'next'
} t_stack;

/* Initialization */

t_stack *fill_stack(int argc, char **argv);
void        set_index(t_stack *stack_a, int ac);

/* Sorting Algorithms */

void	sort_3num(t_stack **stack);
void	sort_large_stack(t_stack **a, t_stack **b);
int	is_sorted_stack(t_stack *stack);

/* Position */

int find_minimum_index_position(t_stack **stack);
void assign_target_positions(t_stack **a, t_stack **b);

/* Cost */

void        calculate_move_cost(t_stack **stack_a, t_stack **stack_b);
void        execute_move(t_stack **stack_a, t_stack **stack_b);

/* Calculate Move */

void        begin_move(t_stack **a, t_stack **b, int cost_a, int cost_b);

/* Operations */

void        pa(t_stack **stack_a, t_stack **stack_b);
void        pb(t_stack **stack_a, t_stack **stack_b);
void        sa(t_stack **stack_a);
void        sb(t_stack **stack_b);
void        ss(t_stack **stack_a, t_stack **stack_b);
void        ra(t_stack **stack_a);
void        rb(t_stack **stack_b);
void        rr(t_stack **stack_a, t_stack **stack_b);
void        rrr(t_stack **stack_a, t_stack **stack_b);
void        rra(t_stack **stack_a);
void        rrb(t_stack **stack_b);

/* Stack Functions */

t_stack     *stack_new(int value);
int         get_stack_size(t_stack *stack);

/* Utils */

void        free_stack(t_stack **stack);
long int    ft_atol(const char *str);
int         num_abs(int num);
void        exit_error(t_stack **stack_a, t_stack **stack_b);
t_stack *ft_lstlast(t_stack *lst);

/* Input Check */
int is_valid_input(char **args);

#endif
