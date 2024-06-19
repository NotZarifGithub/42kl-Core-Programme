static int ft_intlen(int n)
{
    int len = 0;
    if (n == 0)
        return 1;
    if (n < 0)
        n = -n;
    while (n != 0)
    {
        n /= 10;
        len++;
    }
    return len;
}

char *ft_itoa(int n)
{
    int len = ft_intlen(n);
    char *str = (char *)malloc((len + 1) * sizeof(char));
    str[len] = '\0';
    if (n == 0)
        str[0] = '0';
    else
    {
        int i = len - 1;
        if (n < 0)
        {
            str[0] = '-';
            n = -n;
        }
        while (n != 0)
        {
            str[i--] = (n % 10) + '0';
            n /= 10;
        }
    }
    return str;
}

/*int main()
{
    int num1 = 123;
    int num2 = -456;
    int num3 = 0;

    char *str1 = ft_itoa(num1);
    char *str2 = ft_itoa(num2);
    char *str3 = ft_itoa(num3);

    printf("num1: %d -> %s\n", num1, str1);
    printf("num2: %d -> %s\n", num2, str2);
    printf("num3: %d -> %s\n", num3, str3);

    free(str1);
    free(str2);
    free(str3);

    return 0;
}*/
