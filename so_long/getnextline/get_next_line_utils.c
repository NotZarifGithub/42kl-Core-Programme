/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 13:18:15 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/12/02 18:29:59 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
size_t	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
*/

char	*gnl_strchr(const char *str, int c)
{
	if (str == NULL)
		return (NULL);
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

char	*ft_strjoin(char *s1, const char *s2)
{
	char	*result;
	int		x;
	int		y;

	if (!s1)
	{
		s1 = (char *)malloc(1 * sizeof(char));
		s1[0] = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	result = malloc(sizeof(char) *((ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (result == NULL)
		return (NULL);
	x = -1;
	y = 0;
	if (s1)
		while (s1[++x] != '\0')
			result[x] = s1[x];
	while (s2[y] != '\0')
		result[x++] = s2[y++];
	result[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	free(s1);
	return (result);
}

char	*ft_extract_line(char *left_str)
{
	int		i;
	char	*str;

	i = 0;
	if (!left_str[i])
		return (NULL);
	while ((left_str[i]) && (left_str[i] != '\n'))
		i++;
	str = (char *)malloc(sizeof(char) * (i + 2));
	if (!str)
		return (NULL);
	i = 0;
	while ((left_str[i]) && (left_str[i] != '\n'))
	{
		str[i] = left_str[i];
		i++;
	}
	if (left_str[i] == '\n')
	{
		str[i] = left_str[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_update_str(char *left_str)
{
	int		x;
	int		y;
	char	*str;

	x = 0;
	while ((left_str[x]) && (left_str[x] != '\n'))
		x++;
	if (!left_str[x])
	{
		free(left_str);
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(left_str) - x + 1));
	if (!str)
		return (NULL);
	x++;
	y = 0;
	while (left_str[x])
		str[y++] = left_str[x++];
	str[y] = '\0';
	free(left_str);
	return (str);
}
