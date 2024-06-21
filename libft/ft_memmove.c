/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:02:54 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/21 17:53:57 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dest_ptr;
	const char	*src_ptr;
	int			i;

	if (!dest && !src)
		return (NULL);
	dest_ptr = (char *)dest;
	src_ptr = (const char *)src;
	i = n - 1;
	if (dest_ptr > src_ptr && dest_ptr < src_ptr + n)
	{
		while (i >= 0)
		{
			dest_ptr[i] = src_ptr[i];
			i--;
		}
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}

/*int main(void)
{
	char str1[] = "I love Kanye West.";	
	const char str2[] = "testing testing";

	printf("oldstring: %s \n", str1);
	ft_memmove(str1, str2, 5);
	printf("newstring: %s \n", str1);
	return (0);
}*/
