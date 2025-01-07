#include <unistd.h>

void str_capitalizer(char *str)
{
    int i;

    i = 0;
    while (str[i] >= 'a' && str[i] <= 'z')
        str[i] -= 32;
    write(1, &str[i], 1);
    while (str[++i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (str[i - 1] == ' ' || str[i - 1] == '\t')
                str[i] -= 32;
        }
        write(1, &str[i], 1);
    }
}

int main(int argc, char **argv)
{
    int i;

    i = 1;
    if (argc > i)
    {
        while (argc > i)
        {
            str_capitalizer(argv[i]);
            write(1, "\n", 1);
            i++;
        }
    }
    else
        write(1, "\n", 1);
    return (0);
}

