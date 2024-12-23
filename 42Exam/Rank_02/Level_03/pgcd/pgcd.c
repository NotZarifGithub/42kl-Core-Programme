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
    unsigned int num1;
    unsigned int num2;
    unsigned int hcf_value;
    
    if (argc == 3)
    {
        num1 = atoi(argv[1]);
        num2 = atoi(argv[2]);
        hcf_value = hcf(num1, num2);
        printf("%u\n", hcf_value);
    }
    else
        printf("\n");
    return (0);
}
