#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main (int ac, char **av)
{
    if(ac == 2)
    {
        int i = 0;
        while(av[1][i])
            i++;
        i--;
        while(i >= 0)
        {
            while((av[1][i] == ' ' || av[1][i] == '\t') && i >= 0)
                i--;
            int end = i;
            while((av[1][i] != ' ' && av[1][i] != '\t') && i >= 0)
                i--;
            int s = i + 1;
            while(av[1][s] != ' ' && av[1][s] != '\t' && av[1][s] != '\0')
            {
                ft_putchar(av[1][s]);
                s++;
            }
            if (i != 0)
                ft_putchar(' ');
        }  

    }
    ft_putchar('\n');
    return(0);
}