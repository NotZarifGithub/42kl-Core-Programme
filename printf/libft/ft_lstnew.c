/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 14:11:58 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/24 16:29:18 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/*int	main(void)
{
	t_list *node1;
	t_list *node2;

	node1 = ft_lstnew("I love Kanye West");
	node2 = ft_lstnew("I truly love Kanye West");
	if (!node1 || !node2)
	{
		printf("Memory allocation failed!\n");
		free(node1);
		free(node2);
		return (1);
	}	
	node1->next = node2;
	t_list *current = node1;
	while (current)
	{
		printf("Node created successfully!\n");
		printf("%s\n",(char *)current->content);
		printf("%p\n", current);
		current = current->next;
	}
	while (node1)
	{
		t_list *next = node1->next;	
		free(node1);
		node1 = next;
	}

	return (0);
}*/
