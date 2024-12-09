
size_t  ft_strspn(const char *s, const char *accept)
{
    size_t i ;
    size_t j;
    size_t count;

    i = 0;
    count = 0;
    while (s[i] != '\0')
    {
        j = 0;
        while (accept[j] != '\0')
        {
            if (accept[j] == s[i])
                break;
            j++;
        }
        if (accept[j] == '\0')
            break;
        count++;
        i++;
    }
    return (count);
}
