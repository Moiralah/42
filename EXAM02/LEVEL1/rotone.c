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
            if ('A' <= *argv[1] && *argv[1] < 'Z' || 'a' <= *argv[1] && *argv[1] < 'z')
                *argv[1] += 1;
            else if ( *argv[1] == 'Z' || *argv[1] == 'z')
                *argv[1] -= 25;
            ft_putchar(*argv[1]);
            *argv[1]++; // this refer to the addresse char, but it should be without the dereference
            // i dont know why
            // without dereference u only moving the pointer to the next char
            // with dereference u have access to current char and then move to the next char in one combine operation. 
            // for this code u only need to point to the next char. so no need the dereference actually.
        }
    }
    ft_putchar('\n');
    return(0);
}