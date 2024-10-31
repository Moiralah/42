#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    int i;
    int j;
    int s2 = 0;

    if(ac == 2)
    {
        i = 0;
        while(av[1][i] == ' ')
            i++;
        while(av[1][i] && (av[1][i] != ' ') && (av[1][i] != '\t'))
            i++;
        while(av[1][i] == ' ')
            i++;
        while(av[1][i])
        {
            s2 = 1;
            if (av[1][i] == ' ' && av[1][i + 1] != ' ')
                ft_putchar(av[1][i]);
            else if (av[1][i] != ' ')
                ft_putchar(av[1][i]);
            i++;
        }
        if (av[1][i] == '\0' && s2 == 1)
            ft_putchar(' ');
                     
        j = 0;
        while((av[1][j] == ' ') || (av[1][j] == '\t'))
            j++;
        while(av[1][j] && (av[1][j] != ' ') && (av[1][j] != '\t'))
        {
            ft_putchar(av[1][j]);
            j++;
        }
        av[1][j] = '\0';
    }
    if (ac > 2)
    {
        i = 0;
        while(av[1][i])
        {
            ft_putchar(av[1][i]);
            i++;
        }
    }
    ft_putchar('\n');
    return(0);
}