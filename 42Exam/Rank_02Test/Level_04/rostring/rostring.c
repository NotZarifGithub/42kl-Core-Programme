#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int first_word_start;
    int first_word_end;

    if (argc > 1)
    {
        i = 0;
        while (argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
        first_word_start = i;
        while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
            i++;
        first_word_end = i;
        while (argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
        if (argv[1][i] != '\0')
        {
            while (argv[1][i] != '\0')
            {
                if (argv[1][i] == ' ' || argv[1][i] == '\t')
                {
                    while (argv[1][i] == ' ' || argv[1][i] == '\t')
                        i++;
                    if (argv[1][i] != '\0')
                        write(1, " ", 1);
                }
                else
                {
                    write(1, &argv[1][i], 1);
                    i++;
                }
            }
            write(1, " ", 1);
        }
        while (first_word_start < first_word_end)
        {
            write(1, &argv[1][first_word_start], 1);
            first_word_start++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
