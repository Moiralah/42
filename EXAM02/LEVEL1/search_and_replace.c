# include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    if(argc == 4 && !argv[2][1] && !argv[3][1])
    {
        while (*argv[1])
        {
            if (*argv[1] == argv[2][0])
                *argv[1] = argv[3][0];
            ft_putchar(*argv[1]);
            *argv[1]++;
        }
    }
    ft_putchar('\n');
    return (0);
}