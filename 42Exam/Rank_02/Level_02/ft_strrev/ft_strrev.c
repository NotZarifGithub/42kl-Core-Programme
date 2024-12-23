
char    *ft_strrev(char *str)
{
    int i;
    int len;
    char temp;

    len = 0;
    while (str[len] != '\0')
        len++;
    i = 0;
    len--;
    while (len > i)
    {
        temp = str[i];
        str[i] = str[len];
        str[len] = temp;
        i++;
        len--;
    }
    return (str);
}
