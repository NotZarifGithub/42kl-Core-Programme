/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 16:43:21 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/24 17:57:43 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*int	main(void)
{
	t_list *head = ft_lstnew("A");
	head->next = ft_lstnew("B");
	head->next->next = ft_lstnew("C");

	t_list *current = head;
	printf("Original list: ");
	while (current)
	{
		printf("%s --> ", (char *)current->content);
		current = current->next;
	}
	printf("NULL\n");
	
	t_list *new_node = ft_lstnew("D");
	ft_lstadd_front(&head, new_node);
	current = head;
	printf("Updated list: ");
	while (current)
	{
		printf("%s --> ", (char *)current->content);
		current = current->next;
	}
	printf("NULL\n");
	return (0);
}*/	
