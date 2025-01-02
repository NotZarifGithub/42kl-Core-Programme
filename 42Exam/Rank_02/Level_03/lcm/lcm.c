
unsigned int    hcf(unsigned int a, unsigned int b)
{
    unsigned int temp;

    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = b;
    }
    return (a);
}

unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int hcf_value;

    if (a == 0 || b == 0)
        return (0);
    hcf_value = hcf(a, b);
    return ((a * b) / hcf_value);
}
