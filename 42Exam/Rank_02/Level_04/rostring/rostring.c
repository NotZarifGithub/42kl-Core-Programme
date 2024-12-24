#include <unistd.h>

int main(int argc, char **argv)
{
    char *str;
    char *first_letter_word;
    char *last_letter_word;

    if (argc > 1)
    {
        str = argv[1];
        while (*str == ' ' || *str == '\t')
            str++;
        first_letter_word = str;
        while (*str && *str != ' ' && *str != '\t')
            str++;
        last_letter_word = str;
        while (*str == ' ' || *str == '\t')
            str++;
        if (*str)
        {
            while (*str)
            {
                if (*str == ' ' || *str == '\t')
                {
                    while (*str == ' ' || *str == '\t')
                        str++;
                    if (*str)
                        write(1, " ", 1);
                }
                else
                {
                    write(1, str, 1);
                    str++;
                }
            }
            write(1, " ", 1);
        }
        while (first_letter_word < last_letter_word)
        {
            write(1, first_letter_word, 1);
            first_letter_word++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
