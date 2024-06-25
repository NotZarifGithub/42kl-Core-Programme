/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 13:16:22 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/26 02:53:26 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	count_token(const char *str, char c)
{
	size_t	count_token;

	count_token = 0;
	while (*str)
	{
		if (*str != c)
		{
			++count_token;
			while (*str && *str != c)
				++str;
		}
		else
			++str;
	}
	return (count_token);
}

char	**ft_split(const char *str, char c)
{
	char	**split_str;
	size_t	i;
	size_t	len;

	if (!str)
		return (0);
	i = 0;
	split_str = malloc(sizeof(char *) * (count_token(str, c) + 1));
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

    words = ft_split(str, ' '); 

    for (int i = 0; words[i]; i++)
    {
        printf("%s\n", words[i]);
    }

    for (int i = 0; words[i]; i++)
    {
        free(words[i]);
    }
    free(words);

    return 0;
}*/
