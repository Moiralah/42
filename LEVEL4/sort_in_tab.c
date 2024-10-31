void sort_int_tab(int *tab, unsigned int size)
{
    int i = 0;
    int temp;

    while(i < (size - 1))
    {
        if(tab[i] > tab[i + 1])
        {
            temp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = temp;
            i = 0;
        }
        else
            i++;
    }

}

#include <stdio.h>

int main()
{
    int a[] = {3, 5, 7, 8, 9, 2, 4};
    int size = 5;
    int i = 0;
    
    sort_int_tab(a, size);
    while (i < size)
        printf("%d", a[i++]);
}
