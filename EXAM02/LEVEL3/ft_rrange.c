#include <stdlib.h>
#include <stdio.h>

int *ft_rrange(int start, int end)
{
    int len;
    int *m;
    int i;

    if (start > end)
        return (ft_rrange(end, start));

    len = end - start + 1;
    if(len < 0)
        len *= -1;

    m = (int *)malloc(len * sizeof(int));
    if (m == NULL)
        return(NULL);

    i = 0;
    if(m)
    {
        while (i < len)
        {
            m[i] = end;
            end--;
            i++;

        }
    }
    return(m);
}

int main()
{
    int *m;
    int i = 0;
    int end = -3;
    int start = 1;
    int len = start - end + 1;
    
    m = ft_rrange(start,end);
    if(len < 0)
        len *= -1;

    while(i < len)
    {
        printf("%d ", m[i]);
        i++;
    }
}