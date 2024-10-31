#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
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

int ft_puthex(int num)
{
    int len;
    if(num > 16)
    {
        len += ft_puthex(num / 16);
        len += ft_puthex(num % 16);
    }
    else
    {
        if(num < 10)
            ft_putchar(num + '0');
        else
            ft_putchar(num + 'a' - 10);
        len++;
    }
    return(len);

}

int main (int ac, char **av)
{
    int i;

    if(ac == 2)
    {
        i = ft_atoi(av[1]);
        ft_puthex(i);
    }
    ft_putchar('\n');
    return(0);
}