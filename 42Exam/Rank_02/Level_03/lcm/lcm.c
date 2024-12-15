
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

unsigned int lcm(unsigned int a, unsigned int b)
{
    if (a == 0 || b == 0)
        return (0);
    return (a / hcf(a, b) * b);
}
