/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 13:16:22 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/25 20:58:43 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_toklen(const char *str, char c)
{
	size_t	tok_len;

	tok_len = 0;
	while (*str)
	{
		if (*str != c)
		{
			++tok_len;
			while (*str && *str != c)
				++str;
		}
		else
			++str;
	}
	return (tok_len);
}

char	**ft_split(const char *str, char c)
{
	char	**split_str;
	size_t	i;
	size_t	len;

	if (!str)
		return (0);
	i = 0;
	split_str = malloc(sizeof(char *) * (ft_toklen(str, c) + 1));
	if (!split_str)
		return (0);
	while (*str)
	{
		if (*str != c)
		{
			len = 0;
			while (*str && *str != c && ++len)
				++str;
			split_str[i++] = ft_substr(str - len, 0, len);
		}
		else
			++str;
	}
	split_str[i] = 0;
	return (split_str);
}

/*int main()
{
    char **words;
    char str[] = "I love Kanye West";

    words = ft_split(str, ' '); // space character as delimiter

    for (int i = 0; words[i]; i++)
    {
        printf("%s\n", words[i]);
    }

    // Don't forget to free the memory!
    for (int i = 0; words[i]; i++)
    {
        free(words[i]);
    }
    free(words);

    return 0;
}*/
