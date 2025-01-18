/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 22:41:17 by mabd-ram          #+#    #+#             */
/*   Updated: 2025/01/17 22:41:18 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

/* free_stack:
*	Frees each element in a given stack and sets the stack pointer to NULL.
*/
void	free_stack(t_stack **stack)
{
	t_stack	*current_node;

	if (!stack || !(*stack))
		return ;

	while (*stack)
	{
		current_node = *stack;
		*stack = (*stack)->next;
		free(current_node);
	}
}

/* exit_error:
*   Writes "Error\n" to the standard output after freeing stack a and b.
*	Exits with standard error code 1.
*/
void	exit_error(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_a && *stack_a)
		free_stack(stack_a);
	if (stack_b && *stack_b)
		free_stack(stack_b);
	write(2, "Error\n", 6);
	exit(1);
}

/* ft_atoi:
*   Converts an alphanumeric string of characters into a long integer.
*/
long int	ft_atol(const char *str)
{
	long int	nb;
	int			sign;
	int			i;

	nb = 0;
	sign = 1;
	i = 0;

	// Skip whitespaces
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;

	// Check sign
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}

	// Convert string to number
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}

	return nb * sign;
}

/* nb_abs:
*	Returns the absolute value of a given number.
*	The absolute value of a number is used to measure the distance of that
*	number from 0, whether it is positive or negative (abs value of -6 is 6).
*/
int	num_abs(int num)
{
	if (num < 0)
		return (num * -1);
	return (num);
}

t_stack *ft_lstlast(t_stack *lst)
{
	if (!lst)
		return NULL;
	while (lst->next)
		lst = lst->next;
	return lst;
}