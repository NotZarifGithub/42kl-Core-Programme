/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 18:13:41 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/24 18:52:38 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

/*int main(void)
{
	t_list *head = ft_lstnew("A");
	head->next = ft_lstnew("B");
	head->next->next = ft_lstnew("C");

	t_list *current = head;
	printf("Node size: %d ", ft_lstsize(current));
	return (0);
}*/
