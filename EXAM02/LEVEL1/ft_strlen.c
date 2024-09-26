#include <unistd.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;

    while(*str)
    {
        str++;
        i++;
    }
    return(i);
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main()
{
    ft_putchar(ft_strlen("wow") + '0');
}