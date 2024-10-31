# include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main (int argc, char **argv)
{
    if (argc > 1)
    {
        int i;

        i = 0;        

        while(argv[1][i])
            i++;
        while(i)
            ft_putchar(argv[1][--i]);
            // this is the same as below code, but can save line.
            // i--; // need to minus i 1sr because the array also take care of [0]
                    // but how about the '\0' dont we need to put it too?
            // ft_putchar(argv[1][i]);
    }
    ft_putchar('\n');
    return (0);
}