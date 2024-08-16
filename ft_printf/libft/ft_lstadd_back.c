/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 14:27:10 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/25 15:31:31 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	current = *lst;
	if (!lst || !new)
		return ;
	if (!current)
	{
		*lst = new;
		return ;
	}
	while (current->next)
	{
		current = current->next;
	}
	current->next = new;
}

/*int main(void)
{
    t_list *head = ft_lstnew("Kanye");
    head->next = ft_lstnew("Ye");
    head->next->next = ft_lstnew("Pablo");

    t_list *current = head;
    printf("Original List : ");
    while (current)
    {
        printf("%s --> ", (char *)current->content);
        current = current->next;
    }
    printf("NULL\n");

    t_list *new_node = ft_lstnew("Yeezus");
    ft_lstadd_back(&head, new_node);

    printf("Updated List: ");
    current = head;
    while (current)
    {
        printf("%s --> ", (char *)current->content);
        current = current->next;
    }
    printf("NULL\n");

    return 0;
}*/
