/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 18:39:04 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/20 15:48:33 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	if (c == '\0')
		return ((char *)str + ft_strlen(str));
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)(str));
		str++;
	}
	return (NULL);
}

/*int main(void)
{
	const char *str1;
	unsigned char c;
	char *address;

	str1 = "I love Kanye West.";
	c = 'K';
	address = ft_strchr(str1, c);
	printf("%s", address);
	return (0);
}*/
