
int		max(int* tab, unsigned int len)
{
    int i;
    int result;

    if (len == 0)
        return (0);
    i = 0;
    result = tab[i];
    while (len > i)
    {
        if (result <= tab[i])
            result = tab[i];
        i++;
    }
    return (result);
}
