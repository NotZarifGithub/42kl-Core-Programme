/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 12:30:34 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/20 13:59:42 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen((char *)str);
	while (i >= 0)
	{
		if (str[i] == c)
			return ((char *)(&str[i]));
		i--;
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
