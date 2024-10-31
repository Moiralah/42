# include <unistd.h>

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

void ft_putnbr(int nbr)
{
    if (nbr > 9)
    {
        ft_putnbr(nbr / 10);
        ft_putnbr(nbr % 10);
    }
    else
    {
        ft_putchar(nbr + '0');
    }
}

int main(int nbr)
{
    nbr = 1;

    while (nbr <= 100)
    {
        if ((nbr % 15) == 0)
            ft_putstr("fizzbuzz");
        else if ((nbr % 3) == 0)
            ft_putstr("fizz");
        else if ((nbr % 5) == 0)
            ft_putstr("buzz");
        else
           ft_putnbr(nbr);
        ft_putchar('\n');
        nbr++;
    }
}