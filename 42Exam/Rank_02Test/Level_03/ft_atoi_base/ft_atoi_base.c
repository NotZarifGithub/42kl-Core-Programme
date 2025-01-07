int	ft_atoi_base(const char *str, int str_base)
{
    int result;
    int sign;
    int c;

    result = 0;
    sign = 1;
    if (*str == '-')
    {
        sign = -1;
        str++;
    }
    while (*str)
    {
        if (*str >= '0' && *str <= '9')
            c = *str - '0';
        else if (*str >= 'a' && *str <= 'f')
            c = *str - 'a' + 10;
        else if (*str >= 'A' && *str <= 'F')
            c = *str - 'A' + 10;
        else
            break;
        result = result * str_base + c;
        str++;
    }
    return (result * sign);
}
