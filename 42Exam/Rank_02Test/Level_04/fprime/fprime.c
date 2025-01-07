#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    int i;
    int num;

    if (argc == 2)
    {
        i = 2;
        num = atoi(argv[1]);
        if (num == 1)
            printf("1");
        while (num >= i)
        {
            if (num % i == 0)
            {
                printf("%d", i);
                num /= i;
                if (num > 1)
                    printf("*");
            }
            else
                i++;
        }
    }
    printf("\n");
    return (0);
}
