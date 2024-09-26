# include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}

int main()
{
    int aa = 9;
    int bb = 8;
    int *a = &aa;
    int *b = &bb;

    ft_swap(a, b);
    ft_putchar(*a + '0');
    ft_putchar(*b + '0');

}