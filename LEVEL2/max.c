#include <stdio.h>

int max(int *tab, unsigned int len)
{
    int i;
    int result;

   
    if(len == 0)
        return(0);

    i = 0;
    result = tab[i];
    while(i < len)
    {
        if(tab[i] > result)
            result = tab[i];
        i++;
    }
    return(result);
}

int main()
{
    int tab[] = {9, 6, 5, 10};
    int len = 4;

    printf("%d\n", max(tab, len));
}