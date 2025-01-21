/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 17:25:34 by mabd-ram          #+#    #+#             */
/*   Updated: 2025/01/21 00:28:36 by mabd-ram         ###   ########.fr       */
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
	struct s_stack	*next;
	int				data;
	int				order;
	int				position;
	int				target_position;
	int				cost_a;
	int				cost_b;
}	t_stack;

/* Stack management */
t_stack		*create_new_stack(int value);
t_stack		*fill_stack(int argc, char **argv);
int			get_stack_size(t_stack *stack);
void		free_stack(t_stack **stack);
t_stack		*ft_lstlast(t_stack *lst);
t_stack		*get_stack_before_bottom(t_stack *stack);
t_stack		*get_stack_bottom(t_stack *stack);

/* Sorting */
void		begin_sort(t_stack **stack_a, t_stack **stack_b, int stack_size);
int			is_sorted_stack(t_stack *stack);
void		sort_3num(t_stack **stack);
void		sort_large_stack(t_stack **a, t_stack **b);

/* Stack operations */
void		pa(t_stack **stack_a, t_stack **stack_b);
void		pb(t_stack **stack_a, t_stack **stack_b);
void		sa(t_stack **stack_a);
void		sb(t_stack **stack_b);
void		ss(t_stack **stack_a, t_stack **stack_b);
void		ra(t_stack **stack_a);
void		rb(t_stack **stack_b);
void		rr(t_stack **stack_a, t_stack **stack_b);
void		rrr(t_stack **stack_a, t_stack **stack_b);
void		rra(t_stack **stack_a);
void		rrb(t_stack **stack_b);

/* Indexing and positioning */
void		assign_positions(t_stack **stack);
void		assign_target_positions(t_stack **a, t_stack **b);
int			find_minimum_index_position(t_stack **stack);
int			find_minimum_position(t_stack *stack);
int			find_best_higher_position(t_stack *stack, int b_order);
void		set_index(t_stack *stack_a, int ac);

/* Move cost calculation */
void		calculate_move_cost(t_stack **stack_a, t_stack **stack_b);
void		execute_move(t_stack **stack_a, t_stack **stack_b);
void		begin_move(t_stack **a, t_stack **b, int cost_a, int cost_b);

/* Utility functions */
long int	ft_atol(const char *str);
int			num_abs(int num);
void		exit_error(t_stack **stack_a, t_stack **stack_b);
int			is_valid_input(char **args);

#endif
