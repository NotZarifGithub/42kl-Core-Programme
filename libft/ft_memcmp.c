/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:05:58 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/25 23:26:44 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*str1_ptr;
	const unsigned char	*str2_ptr;
	size_t				i;

	str1_ptr = (const unsigned char *)str1;
	str2_ptr = (const unsigned char *)str2;
	i = 0;
	while (n > i)
	{
		if (str1_ptr[i] != str2_ptr[i])
			return ((int)(str1_ptr[i] - str2_ptr[i]));
		i++;
	}
	return (0);
}

/*int main(void)
{
	char str1[] = "I love Kanye West.";
	char str2[] = "I love Kanye West.";
	int i;

	i = ft_memcmp(str1, str2, 5);
	if (i < 0)
		printf("str1 < str2");
	else if (i > 0)
		printf("str1 > str2");
	else
		printf("str1 == str2");
}*/
