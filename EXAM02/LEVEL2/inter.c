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
            k = 0;
            while(av[1][k] && i != k && av[1][i] != av[1][k])
                    k++;
            j = 0;
            while (av[2][j] && av[1][i] != av[2][j])
                j++;

            if(i==k && av[1][i] == av[2][j])
                    ft_putchar(av[1][i]);
            i++;
        }
    }
    ft_putchar('\n');
    return(0);
}