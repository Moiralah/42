#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *ptr = *begin_list;

    if(begin_list == NULL || *begin_list == NULL)
        return(NULL);
    
    if (cmp(ptr->data, data_ref) == 0)
    {
        *begin_list = ptr->next;
        free(ptr);
        ft_list_remove_if(begin_list, data_ref, cmp);
    }
    else
    {
        ptr = *begin_list;
        ft_list_remove_if(&ptr->next, data_ref, cmp);
    }
}