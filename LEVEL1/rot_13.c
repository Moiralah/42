# include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main (int argc, char **argv)
{
    if(argc > 1)
    {
        while(*argv[1])
        {
            if ('A' <= *argv[1] && *argv[1] <= 'M' || 'a' <= *argv[1] && *argv[1] <= 'm')
                *argv[1] += 13;
            else if ('N' <= *argv[1] && *argv[1] <= 'Z' || 'n' <= *argv[1] && *argv[1] <= 'z')
                *argv[1] -= 13;
            ft_putchar(*argv[1]);
            *argv[1]++; //
        }

    }
    ft_putchar('\n');
    return(0);
}