#include <unistd.h>

int ft_atoi(const char *str)
{
    int result;
    int sign;

    sign = 0;
    while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v' || *str == '\f' || *str == '\r')
        str++;
    if (*str == '-')
        sign = 1;
    if (*str == '-' || *str == '+')
        str++;
    while (*str)
    {
        if (*str >= '0' && *str <= '9')
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
    if (argc == 2)
        print_hex(ft_atoi(argv[1]));
    write(1, "\n", 1);
    return (0);
}
