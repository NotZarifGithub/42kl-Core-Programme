#include <stddef.h>

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

int	ft_list_size(t_list *begin_list)
{
    int len;
    t_list *current;

    current = begin_list;
    while (current != NULL)
    {
        current = current->next;
        len++;
    }
    return (len);
}
