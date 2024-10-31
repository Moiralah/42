#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    int i; 
    int j;
    int k;

    if(ac == 3)
    {
        i = 0;
        while(av[1][i])
        {
            j = 0;
            while(av[1][j] && i != j && av[1][j] != av[1][i])
                j++;
            
            if(i == j)
                ft_putchar(av[1][i]);
            i++;
        }

        k = 0;
        while(av[2][k])
        {
            j = 0;
            while(av[2][j] && k != j && av[2][j] != av[2][k])
                j++;
            
            i = 0;
            while(av[1][i] && av[2][k] != av[1][i])
                i++;

            if(k == j && av[2][k] != av[1][i])
                ft_putchar(av[2][k]);
            
            k++;
        }
    }
    ft_putchar('\n');
    return(0);
}