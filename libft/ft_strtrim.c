char *ft_strtrim(char const *s1, char const *set)
{
    char *trimmed_str;
    int start;
    int end;

    start = 0;
    end = ft_strlen(s1) - 1;
    while (start <= end && ft_strchr(set, s1[start]) != NULL)
      start++;    
    while (start >= end && ft_strchr(set, s1[end]) != NULL)
      end--;
    trimmed_str = malloc((end - start + 2) * sizeof(char)) 
    if (trimmed_str == NULL)
        return (NULL);
    ft_strlcpy(trimmed_str, s1 + start, end - start + 2);
    return (trimmed_str);
}
