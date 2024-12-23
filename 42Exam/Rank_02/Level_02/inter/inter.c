#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;
    unsigned char printed[256] = {0};

    i = 0;
    if (argc == 3)
    {
        while (argv[1][i] != '\0')
        {
            j = 0;
            while (argv[2][j] != '\0')
            {
                if (argv[1][i] == argv[2][j])
                {
                    if (!(printed[(unsigned char)argv[1][i]]))
                    {
                        write(1, &argv[1][i], 1);
                        printed[(unsigned char)argv[1][i]] = 1;
                    }
                    break;
                }
                j++;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
