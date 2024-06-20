/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 15:42:53 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/20 17:16:47 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *hay, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	needle_len;

	if (hay == NULL || needle == NULL)
		return (NULL);
	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)(hay));
	i = 0;
	while (hay[i] != '\0' && n > i)
	{
		j = 0;
		while (j < needle_len && i + j < n && hay[i + j] == needle[j])
			j++;
		if (needle_len == j)
			return ((char *)(&hay[i]));
		i++;
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
