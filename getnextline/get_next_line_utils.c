#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')	
		i++;
	return (i);	
}

char	*ft_strchr(const char *str, int c)
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

char    *ft_strjoin(const char *str1, const char *str2)
{
    char    *result;
    int     total_size;
    int     i;
    int     y;

    i = 0;
    total_size = ft_strlen(str1) + ft_strlen(str2);
    result = malloc(sizeof(char) * (total_size + 1));
    if (!str1 || !str2 || !result)
        return (NULL);
    while (str1[i] != '\0')
    {
        result[i] = str1[i];
        i++;
    }
    y = 0;
    while (str2[y] != '\0')
    {
        result[i] = str2[y];
        i++;
        j++;
    }
    result[total_size] = '\0';
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

