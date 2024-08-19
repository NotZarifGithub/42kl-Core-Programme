/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:03:12 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/25 21:23:14 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *)str;
	while (len > 0)
	{
		*p = (unsigned char)c;
		p++;
		len--;
	}
	return (str);
}

/*int main(void)
{
	char str1[] = "I love Kanye West."; 
	ft_memset(str1, '#', 5);
	printf("%s\n", str1);
	return (0);
}*/
