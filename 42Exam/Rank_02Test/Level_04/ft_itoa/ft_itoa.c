#include <stdlib.h>

int ft_num_len(int n)
{
    int len;

    len = 0;
    if (n <= 0)
        len++;
    while (n != 0)
    {
        n /= 10;
        len++;
    }
    return (len);
}

char	*ft_itoa(int nbr)
{
    char *str;
    int len;
    long n;

    len = ft_num_len(nbr);
    n = nbr;
    str = (char *)malloc((len + 1) * sizeof(char));
    if (!str)
        return (NULL);
    str[len] = '\0';
    if (n < 0)
    {
        str[0] = '-';
        n = -n;
    }
    if (n == 0)
        str[0] = '0';
    while (n != 0)
    {
        str[--len] = (n % 10) + '0';
        n /= 10;
    }
    return (str);
}
