#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
    int i;
    t_list *ptr;

    i = 0;
    ptr = begin_list;

    while(ptr != NULL)
    {
        i++;
        ptr = ptr -> next;
    }
    return(i);
}

