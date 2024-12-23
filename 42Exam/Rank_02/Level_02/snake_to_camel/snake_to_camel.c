#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int pos;

    i = 0;
    pos = 0;
    if (argc == 2)
    {
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] == '_')
            {
                pos = argv[1][i + 1] - 32;
                i++;
            }
            else
                pos = argv[1][i];
            write(1, &pos, 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
