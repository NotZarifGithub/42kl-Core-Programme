#include <unistd.h>

int ft_atoi(char *str)
{
    int result;
    int sign;

    sign = 1;
    result = 0;
    while (*str == ' ' || (*str >= 9 && *str <= 13))
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

int is_num_prime(int num)
{
    int i;

    i = 2;
    if (num > 1)
    {
        while (i * i <= num)
        {
            if (num % i == 0)
                return (0);
            i++;
        }
        return (1);
    }
    return (0);
}

void ft_putnbr(int n)
{
    char digit;

    if (n > 9)
        ft_putnbr(n / 10);
    digit = n % 10 + '0'; 
    write(1, &digit, 1);
}

int main(int argc, char **argv)
{
    int num;
    int total;

    num = ft_atoi(argv[1]);
    if (argc == 2)
    {
        total = 0;
        while (num > 1)
        {
            if (is_num_prime(num))
                total += num;
            num--;
        }
        ft_putnbr(total);
    }
    if (argc != 2)
    {
        ft_putnbr(0);
    }
    write(1, "\n", 1);
    return (0);
}
