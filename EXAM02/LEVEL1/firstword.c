#include <unistd.h>

void ft_putstr (char *str)
{
    while ((*str) && !(*str == ' '))
    {
        write(1, str, 1);
        str++;
    }
}

int main (int argc, char **argv)
{
    if (argc == 2)
    {
        while (*argv[1] == ' '|| *argv[1] == '\t')
            *argv[1]++;
        if (('a' <= *argv[1] && *argv[1] <= 'z') || ('A' <= *argv[1] && *argv[1] <= 'Z'))
        {
            ft_putstr(argv[1]);
        }
    }
    ft_putstr ("\n");
    return (0);
}
