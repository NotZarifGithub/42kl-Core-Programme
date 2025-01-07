#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int last_word_start;
    int last_word_end;

    if (argc == 2)
    {
        i = 0;
        while (argv[1][i] != '\0')
            i++;
        while (argv[1][i] == ' ' || argv[1][i] == '\t' || argv[1][i] == '\0')
            i--;
        last_word_end = i;
        while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
            i--;
        last_word_start = i + 1;
        while (last_word_start <= last_word_end)
        {
            write(1, &argv[1][last_word_start], 1);
            last_word_start++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
