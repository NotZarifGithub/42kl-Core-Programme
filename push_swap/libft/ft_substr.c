/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 16:15:58 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/20 17:39:05 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substring;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	substring = malloc((len + 1) * sizeof(char));
	if (!substring)
		return (NULL);
	ft_strlcpy(substring, s + start, len + 1);
	return (substring);
}

/*int main(void)
{
	const char *str1;
	unsigned int start;
	size_t len;
	char *substr;

	str1 = "I love Kanye West";
	start = 7;
	len = 10;
	substr = ft_substr(str1, start, len);
	printf("String: %s\n", str1);
	printf("Substring: %s\n", substr);
	return (0);
}*/
