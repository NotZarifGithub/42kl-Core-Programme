#include <stdio.h>
#include <stdlib.h>

unsigned int hcf(unsigned int a, unsigned int b)
{
    unsigned int temp;

    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    return (a);
}

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        printf("%d", (hcf(atoi(argv[1]), atoi(argv[2]))));
    }
    printf("\n");
    return (0);
}
