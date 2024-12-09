#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    char letter;

    if (argc == 2)
    {
        i = 0;
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                letter = argv[1][i] + 32;
                write(1, "_", 1);
            }
            else
            letter = argv[1][i];
            write(1, &letter, 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
