#include <stdlib.h>

int *ft_rrange(int start, int end)
{
    int *range;
    int i;
    int len;

    if (start <= end)
        len = end - start + 1;
    else
        len = start - end + 1;
    range = malloc(len * sizeof(int));
    i = 0;
    if (start <= end)
    {
        while (start <= end)
        {
            range[i] = end;
            end--;
            i++;
        }
    }
    else
    {
        while (start >= end)
        {
            range[i] = end;
            end++;
            i++;
        }
    }
    return (range);
}
