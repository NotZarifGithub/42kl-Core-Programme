#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int len;
    int i;
    int *range;

    if (end >= start)
        len = end - start + 1;
    else
        len = start - end + 1;
    range = malloc(len * sizeof(int));
    if (!range)
        return (NULL);
    i = 0;
    if (end >= start)
    {
        while (end >= start)
        {
            range[i] = end;
            end--;
            i++;
        }
    }
    else if (end <= start)
    {
        while (end <= start)
        {
            range[i] = end;
            end++;
            i++;
        }
    }
    return (range);
}
