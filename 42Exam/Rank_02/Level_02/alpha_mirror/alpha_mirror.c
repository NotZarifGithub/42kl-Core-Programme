#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int pos;

    if (argc == 2)
    {
        i = 0;
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
                pos = 'z' - (argv[1][i] - 'a');
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                pos = 'Z' - (argv[1][i] - 'A');
            else
                pos = argv[1][i];
            write(1, &pos, 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
