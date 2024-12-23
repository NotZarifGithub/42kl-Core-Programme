#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int a;
    int b;
    int result;

    if (argc == 4)
    {
        a = atoi(argv[1]);
        b = atoi(argv[3]);
        if (argv[2][0] == '+')
            result = a + b;
        else if (argv[2][0] == '-')
            result = a - b;
        else if (argv[2][0] == '*')
            result = a * b;
        else if (argv[2][0] == '/')
            result = a / b;
        printf("%d", result);
    }
    printf("\n");
    return (0);
}
