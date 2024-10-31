#include <unistd.h>

void ft_putstr(char *str)
{
    while(*str)
    {   
        write(1, str, 1);
        str++;
    }
}

int main(int ac, char **av)
{
    int i;
    int j;
    int len;

    if (ac == 3)
    {
        len = 0;
        while(av[1][len])
            len++;

        i = 0;
        j = 0;
        while(av[2][j])// && av[2][j] == av[1][i])
        {    
            if(av[1][i] == av[2][j])
                i++;
            j++;
        }

        if (i == len)
            ft_putstr(av[1]);
    }
    ft_putstr("\n");
    return(0);
}