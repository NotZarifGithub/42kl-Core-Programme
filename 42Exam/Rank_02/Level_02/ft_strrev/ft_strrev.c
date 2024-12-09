
char    *ft_strrev(char *str)
{
    int i;
    int length;
    char temp;

    i = 0;
    length = 0;
    while (str[length] != '\0')
        length++;
    while (i < length / 2)
    {
        temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
        i++;
    }
    return (str);
}
