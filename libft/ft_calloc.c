/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:53:13 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/20 17:37:46 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nitems, size_t n)
{
	void	*ptr;

	ptr = malloc(nitems * n);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, nitems * n);
	return (ptr);
}
