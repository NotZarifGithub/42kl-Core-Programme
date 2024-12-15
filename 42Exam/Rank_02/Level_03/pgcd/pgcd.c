#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int num1;
    int num2;

    if (argc == 3)
    {
        if ((num1 = atoi(argv[1])) > 0 && (num2 = atoi(argv[2])) > 0)
        {
            while (num1 != num2)
            {
                if (num1 > num2)
                    num1 -= num2;
                else
                    num2 -= num1;
            }
            printf("%d", num1);
        }
    }
    printf("\n");
    return (0);
}
