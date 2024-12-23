
size_t  ft_strspn(const char *s, const char *accept)
{
    size_t i;
    size_t j;
    int found;

    i = 0;
    while (s[i] != '\0')
    {
        j = 0;
        found = 0;
        while (accept[j] != '\0')
        {
            if (s[i] == accept[j])
            {
                found = 1;
                break;
            }
            j++;
        }
        if (!found)
            break;
        i++;
    }
    return (i);
}
