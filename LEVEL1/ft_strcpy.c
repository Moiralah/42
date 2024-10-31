# include <unistd.h>

void ft_putstr(char *str)
{
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
}


char *ft_strcpy(char *s1, char *s2)
{
    while (*s2)
    {
        *s1 = *s2;
        s2++;
        s1++;
    }
    *s1 = '\0';
    return (s1);
}

int main()
{
char s2[] =  "wow";
char s1[] = "lol";

ft_strcpy(s1, s2);
ft_putstr(s1);
ft_putstr(s2);
}
