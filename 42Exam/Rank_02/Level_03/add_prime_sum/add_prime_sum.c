#include <unistd.h>

int ft_atoi(const char *str)
{
    int result;
    int sign;

    result = 0;
    sign = 1;
    while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v' || *str == '\f' || *str == '\r')
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

int is_prime(int num)
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

void put_nbr(int n)
{
    int result;

    if (n > 9)
        put_nbr(n / 10);
    result = n % 10 + '0';
    write(1, &result, 1);
}

int main(int argc, char **argv)
{
    int result;
    int num;

    if (argc == 2)
    {
        result = 0;
        num = ft_atoi(argv[1]);
        while (num > 0)
        {
            if (is_prime(num) == 1)
                result += num;
            num--;
        }
        put_nbr(result);
    }
    else
        put_nbr(0);
    write(1, "\n", 1);
    return (0);
}
