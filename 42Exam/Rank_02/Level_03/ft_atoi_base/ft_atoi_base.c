
char to_lower(char c)
{
    if (c >= 'A' && c <= 'Z')
        return (c + 32);
    return (c);
}

int get_digit(char c, int base)
{
    int max_digit;

    if (base <= 10)
        max_digit = base - 1 + '0';
    else
        max_digit = base - 10 - 1 + 'a';
    if (c >= '0' && c <= '9' && c <= max_digit)
        return (c - '0');
    else if (c >= 'a' && c <= 'f' && c <= max_digit)
        return (10 + c - 'a');
    else
        return (-1);
}

int ft_atoi_base(const char *str, int str_base)
{
    int result;
    int sign;
    int digit;

    result = 0;
    sign = 1;
    if (str == NULL || str_base < 2 || str_base > 16)
        return (0);
    if (*str == '-')
    {
        sign = -1;
        str++;
    }
    while (*str)
    {
        digit = get_digit(to_lower(*str), str_base);
        if (digit == -1)
            break;
        result = result * str_base + digit;
        str++;
    }
    return (result * sign);
}

