
int max(int* tab, unsigned int len)
{
    int i;
    int num;

    if (len == 0)
        return (0);
    num = tab[i];
    i = 0;
    while (len > i)
    {
        if (tab[i] > num)
            num = tab[i];
        i++;
    }
    return (num);
}
