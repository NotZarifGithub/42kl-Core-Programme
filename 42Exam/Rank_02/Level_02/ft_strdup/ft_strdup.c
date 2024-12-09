#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int i;
    int length;
    char *dup;

    i = 0;
    length = 0;
    while (src[length] != '\0')
        length++;
    dup = (char *)malloc((length + 1) * sizeof(char));
    while (src[i] != '\0')
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}
