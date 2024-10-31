#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}

void print_bits(unsigned char octet)
{
    int i = 128;
    int num;

    num = octet;

    while(i != 0)
    {
        if(i <= num)
        {
            ft_putchar('1');
            num = num % i;
        }
        else
            ft_putchar('0');
        i = i / 2;
    }    
}

int main()
{
    print_bits(5);
}