/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 12:30:34 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/20 16:14:42 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*str_copy;

	str_copy = (char *)str;
	while (*str_copy != '\0')
		str_copy++;
	if ((char)c == '\0')
		return str_copy;
	str_copy--;
	while (str_copy >= str)
	{
		if (*str_copy == (char)c)
			return ((char *)str_copy);
		str_copy--;
	}
	return (NULL);
}

/*int main(void)
{
	const char *str1;
	char *address;
	int c;

	str1 = "I love Kanye West.";
	c = 'e';
	address = ft_strrchr(str1, c);
	printf("%s", address);
	return (0);
}*/
