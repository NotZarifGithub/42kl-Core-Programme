
static int ft_num_len(int nbr)
{
    int len;
    
    len = 0;
    if (nbr <= 0)
        len = 1;
    while (nbr != 0)
    {
        nbr /= 10;
        len++;
    }
    return (len);
}

char	*ft_itoa(int nbr)
{
    char *str;
    int len;
    long n;

    n = nbr;
    len = ft_num_len(nbr);
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
