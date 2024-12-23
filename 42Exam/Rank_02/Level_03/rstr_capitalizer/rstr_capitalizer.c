#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;
    char pos;

    if (argc > 1)
    {
        i = 1;
        while (argc > 1)
        {
            j = 0;
            while (argv[i][j] != '\0')
            {
                if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
                    pos = argv[i][j] + 32;
                else
                    pos = argv[i][j];
                if ((argv[i][j] >= 'a' && argv[i][j] <= 'z') && (argv[i][j + 1] == ' ' || argv[i][j + 1] == '\t' || argv[i][j + 1] == '\0'))
                    pos = argv[i][j] - 32;
                write(1, &pos, 1);
                j++;
            }
            i++;
            argc--;
            write(1, "\n", 1);
        }
    }
    else
        write(1, "\n", 1);
    return (0);
}
