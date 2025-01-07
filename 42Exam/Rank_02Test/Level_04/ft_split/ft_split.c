#include <stdlib.h>

char *ft_strncpy(char *dest, char *src, int n)
{
    int i;

    i = 0;
    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}

char    **ft_split(char *str)
{
    int i;
    int j;
    int k;
    int word_count;
    char **arr;

    if (!str)
        return (NULL);
    i = 0;
    j = 0;
    k = 0;
    word_count = 0;
    while (str[i])
    {
        while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        if (str[i])
            word_count++;
        while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
            i++;
    }
    arr = (char **)malloc((word_count + 1) * sizeof(char *));
    if (!arr)
        return (NULL);
    i = 0;
    while (str[i])
    {
        while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        j = i;
        while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
            i++;
        if (i > j)
        {
            arr[k] = (char *)malloc(((i - j) + 1) * sizeof(char));
            if (!arr[k])
            {
                while (k > 0)
                    free(arr[--k]);
                free(arr);
                return (NULL);
            }
            ft_strncpy(arr[k], &str[j], i - j);
            arr[k++][i - j] = '\0';
        }
    }
    arr[k] = NULL;
    return (arr);
}
