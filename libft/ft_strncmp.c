/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 14:25:18 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/20 16:51:32 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n )
{
	size_t	i;

	i = 0;
	while (n > i)
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		else if (str1[i] == '\0' || str2[i] == '\0')
			break;
		i++;
	}
	return (0);
}

/*int main(void)
{
	const char *str1, *str2;
	size_t i;
	char value;

	str1 = "I love Kanye West.";
	str2 = "i love Kanye West.";
	i = 5;
	value = ft_strncmp(str1, str2, i);
	if (value < 0)
		printf("str1 > str2");
	else if (value > 0)
		printf("str1 < str2");
	else
		printf("str1 == str2");
	return (0);
}*/
