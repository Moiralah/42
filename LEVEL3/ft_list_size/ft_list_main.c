#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

int     ft_list_size(t_list *begin_list);

t_list *new(void *data)
{
    t_list *n;
    n = (t_list *)malloc(sizeof(t_list));

    if(n)
    {
        n->data = data;
        n->next = NULL;
    }
    return(n);
}

int main(void)
{
    t_list *p, *s, *j;

    p = new("one");
    j = new("two");
    s = new("tri");

    p->next = s;
    s->next = j;
    printf("%d\n", ft_list_size(p));
    return(0);

}


