#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int *range;
    int len;
    int i;

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
            range[i] = start;
            start++;
            i++;
        }
    }
    else if (end <= start)
    {
        while (end <= start)
        {
            range[i] = start;
            start--;
            i++;
        }
    }
    return (range);
}
