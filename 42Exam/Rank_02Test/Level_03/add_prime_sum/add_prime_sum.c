#include <unistd.h>

int ft_atoi(char *str)
{
    int result;
    int sign;

    result = 0;
    sign = 1;
    while (*str == ' ' || *str == '\t')
        str++;
    if (*str == '-')
        sign = -1;
    if (*str == '-' || *str == '+')
        str++;
    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + (*str - '0');
        str++;
    }
    return (result * sign);
}

int is_prime(int n)
{
    int i;

    i = 2;
    if (n <= 1)
        return (0);
    while (i * i <= n)
    {
        if (n % i == 0)
            return (0);
        i++;
    }
    return (1);
}

void ft_putnbr(int n)
{
    char digit;

    if (n > 9)
        ft_putnbr(n / 10);
    digit = (n % 10) + '0';
    write(1, &digit, 1);
}

int main(int argc, char **argv)
{
    int num;
    int result;

    if (argc == 2)
    {
        num = ft_atoi(argv[1]);
        result = 0;
        while (num >= 2)
        {
            if (is_prime(num))
                result += num;
            num--;
        }
        ft_putnbr(result);
    }
    else
        ft_putnbr(0);
    write(1, "\n", 1);
    return (0);
}
