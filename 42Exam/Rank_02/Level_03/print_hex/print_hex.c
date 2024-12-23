#include <unistd.h>

int ft_atoi(char *str)
{
    int result;
    int sign;

    result = 0;
    sign = 1;
    while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;
    if (*str == '-')
        sign = -1;
    if (*str == '-' || *str == '+')
        str++;
    while(*str >= '0' && *str <= '9')
    {
        result = result * 10 + (*str - '0');
        str++;
    }
    return (result * sign);
}

void print_hex(int n)
{
    char *hex_digits;

    hex_digits = "0123456789abcdef";
    if (n >= 16)
        print_hex(n / 16);
    write(1, &hex_digits[n % 16], 1);
}

int main(int argc, char **argv)
{
    int num;

    if (argc == 2)
    {
        num = ft_atoi(argv[1]);
        print_hex(num);
    }
    write(1, "\n", 1);
    return (0);
}
