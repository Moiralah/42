#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    int i;
    int j;

    if(ac == 2)
    {   
        i = 0;
        while(av[1][i])
        {
            if(av[1][i] == ' ' && 33 <= av[1][i + 1] && av[1][i + 1] <= 127)
                j = i + 1; // no need to worry for the tab infront coz
        // the number will be replace by the following tab till the str end.
            i++;
        }

        while(av[1][j])
        {
            if(33 <= av[1][j] && av[1][j] <= 127)
                ft_putchar(av[1][j]);
            j++;
        }
    }
    ft_putchar('\n');
    return(0);
}