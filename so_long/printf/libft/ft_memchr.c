/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:02:25 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/25 22:25:15 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*str_ptr;
	size_t			i;

	str_ptr = (unsigned char *)str;
	i = 0;
	while (n > i)
	{
		if (str_ptr[i] == (unsigned char)c)
			return (&str_ptr[i]);
		i++;
	}
	return (NULL);
}

/*int main(void)
{
	char str1[] = "I love Kanye West.";
	char i = 'K';

	char *address;

	address = ft_memchr(str1, i, strlen(str1));
	printf("Pointed char is %c, string from char %c is %s", i, i, address);
	return (0);
}*/
