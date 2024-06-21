/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 15:42:53 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/21 18:06:59 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(char const *haystack, char const *needle, size_t n)
{
	size_t	j;

	if (!haystack && !n)
		return (NULL);
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && n--)
	{
		j = 0;
		while (*(haystack + j) == *(needle + j)
			&& *(needle + j) && j <= n)
		{
			if (!*(needle + j + 1))
				return ((char *)haystack);
			j++;
		}
		haystack++;
	}
	return (NULL);
}

/*int main(void)
{
	const char *hay1;
	const char *needle1;
	size_t len;
	char *result1;

	hay1 = "I love Kanye West.";
	needle1 = "Kanye";
	len = strlen(hay1);
	result1 = ft_strnstr(hay1, needle1, len);
	if (result1 != NULL)
		printf("Needle found: %s\n", result1);
	return (0);
}*/
