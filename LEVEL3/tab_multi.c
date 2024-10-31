// Assignment name  : tab_mult
// Expected files   : tab_mult.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that displays a number's multiplication table.

// The parameter will always be a strictly positive number that fits in an int,
// and said number times 9 will also fit in an int.

// If there are no parameters, the program displays \n.

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    while(*str)
    {
        ft_putchar(*str);
        str++;
    }
}

int ft_atoi(char *num)
{
    int result = 0;

    while(*num)
    {
        result = result * 10 + *num - '0';
        num++;
    }
    return(result);
}

void ft_putnbr(int num)
{
    if(num > 9)
    {
        ft_putnbr(num / 10);
        ft_putnbr(num % 10);
    }
    else
        ft_putchar(num + '0');
}

int main (int ac, char **av)
{
    int num = 0;
    int i = 0;
    int result;

    if(ac == 2)
    {
        num = ft_atoi(av[1]);
        while(i < 10)
        {
            result = num * i;
            ft_putnbr(i);
            ft_putstr(" x ");
            ft_putnbr(num);
            ft_putstr(" = ");
            ft_putnbr(result);
            ft_putchar('\n');
            i++;
        }
    }
    if(ac == 1)
        ft_putchar('\n');
    return(0);
}