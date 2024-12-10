#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int space;

    if (argc == 2)
    {
        i = 0;
        while (argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] == ' ' || argv[1][i] == '\t')
                space = 1;
            if (!(argv[1][i] == ' ' || argv[1][i] == '\t'))
            {
                if (space == 1)
                    write(1, " ", 1);
                space = 0;
                write(1, &argv[1][i], 1);
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
