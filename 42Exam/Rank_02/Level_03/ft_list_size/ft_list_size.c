#inlcude "ft_list.h"

int ft_list_size(t_list *begin_list)
{
    int count;
    t_list *current_node;

    current_node = begin_list;
    count = 0;
    while (current_node != NULL)
    {
        count++;
        current_node = current_node->next;
    }
    return (count);
}
