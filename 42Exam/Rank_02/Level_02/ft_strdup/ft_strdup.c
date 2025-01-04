#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int i;
    int len;
    char *dup;

    len = 0;
    while (src[len] != '\0')
        len++;
    dup = malloc(len * sizeof(char) + 1);
    if (!dup)
        return (NULL);
    i = 0;
    while (src[i] != '\0')
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}