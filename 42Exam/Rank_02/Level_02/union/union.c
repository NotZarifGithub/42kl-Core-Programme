#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;
    unsigned char printed[256] = {0};

    i = 0;
    j = 0;
    if (argc == 3)
    {
        while (argv[1][i] != '\0')
        {
            if (!(printed[(unsigned char)argv[1][i]]))
            {
                write(1, &argv[1][i], 1);
                printed[(unsigned char)argv[1][i]] = 1;
            }
            i++;
        }
        while (argv[2][j] != '\0')
        {
            if (!(printed[(unsigned char)argv[2][j]]))
            {
                write(1, &argv[2][j], 1);
                printed[(unsigned char)argv[2][j]] = 1;
            }
            j++;
        }
        write(1, "\n", 1);
    }
    write(1, "\n", 1);
    return (0);
}
