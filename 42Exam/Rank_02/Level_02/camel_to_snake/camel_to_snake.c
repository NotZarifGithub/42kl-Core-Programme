#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int word;

    if (argc == 2)
    {
        i = 0;
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                word = argv[1][i] + 32;
            else
                word = argv[1][i];
            write(1, &word, 1);
            if (argv[1][i + 1] >= 'A' && argv[1][i + 1] <= 'Z')
                write(1, "_", 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
