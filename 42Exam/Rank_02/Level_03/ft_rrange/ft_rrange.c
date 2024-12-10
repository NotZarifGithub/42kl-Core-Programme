#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int i;
    int *range;
    int range_size;

    range_size = 0;
    if (start <= end)
        range_size = end - start + 1;
    else
        range_size = start - end + 1;
    range = malloc(range_size * sizeof(int));
    if (!range)
        return (NULL);
    i = 0;
    while (range_size > i)
    {
        range[i] = end;
        if (end > start)
            end--;
        else
            end++;
    }
    return (range);
}
