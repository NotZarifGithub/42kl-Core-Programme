/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 18:27:33 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/20 14:10:15 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(const char *s1, char const *s2)
{
	char	*str;
	size_t	s1_len;	
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	str = malloc(s1_len + s2_len + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, s1_len + 1);
	ft_strlcat(str, s2, s1_len + s2_len + 1);
	return (str);
}

/*int main (void)
{
	const char *str1;
	const char *str2;
	char *joined_str;

	str1 = "I love Kanye West";
	str2 = "I truly do";
	joined_str = ft_strjoin(str1, str2);
	printf("First string: %s\n", str1);
	printf("Second string: %s\n", str2);
	printf("Joined string: %s\n", joined_str);
	return (0);
}*/
