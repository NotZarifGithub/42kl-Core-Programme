#include <stdlib.h>
#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *current;
    t_list *previous;
    t_list *temp;

    if (!begin_list || !(*begin_list))
        return;
    current = *begin_list;
    previous = NULL;
    while (current != NULL)
    {
        if ((*cmp)(current->data, data_ref) == 0)
        {
            temp = current;
            if (previous == NULL)
                *begin_list = current->next;
            else
                previous->next = current->next;
            current = current->next;
            free(temp);
        }
        else
        {
            previous = current;
            current = current->next;
        }
    }
}
