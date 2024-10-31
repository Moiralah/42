#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_atoi(char *num)
{
    int i;
    int result;

    i = 0;
    result = 0;
    while('0' <= num[i] && num[i] <= '9')
    {
        result = result * 10 + num[i] - '0';
        i++;
    }
    return(result);
}

void ft_putnbr(int num)
{
    if (num > 9)
    {
        ft_putnbr(num / 10);
        ft_putnbr(num % 10);
    }
    if (num < 10)
        ft_putchar(num + '0');
}

int is_prime(int num)
{
    int i = 2;

    if (num <= 1)
        return(0);

    while(i * i <= num)
    {   
        if (num % i == 0)
            return(0);
        i++;
    }
    return(1);
}

int main(int ac, char **av)
{
    int prime;
    int num;

    if(ac == 2)
    {
        prime = 0;
        num = ft_atoi(av[1]);
        
        while(num > 0)
        {
            if (is_prime(num))
                prime = prime + num;
            num--;
        }
        ft_putnbr(prime);
    }

    if(ac != 2)
        ft_putchar('0');
    ft_putchar('\n');
}