/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 18:54:01 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/25 14:26:27 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	if (!lst)
		return (NULL);
	current = lst;
	while (current && current->next)
	{
		current = current->next;
	}
	return (current);
}

/*int main(void)
{
	t_list *head = ft_lstnew("Kanye");
	head->next = ft_lstnew("Omari");
	head->next->next = ft_lstnew("West");

	t_list *current = head;
	printf("Original list: ");
	while (current)
	{
		printf("%s --> ", (char *)current->content);
		current = current->next;
	}
	printf("NULL\n");
	t_list *last_node = ft_lstlast(head);
	printf("Last node: %s", (char *)last_node->current);
	return (0);
}*/
