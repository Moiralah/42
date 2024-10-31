#include <stdio.h>

int ft_valid(char c, int baselen)
{
    if ('0' <= c && c <= '9')
        return (c - '0' < baselen);
    else if ('a' <= c && c <= 'f')
        return (c - 'a' + 10 < baselen);
    else if ('A' <= c && c <= 'F')
        return(c - 'A' + 10 < baselen);
    return(0);
}

int ft_value(char c)
{
    if ('0' <= c && c <= '9')
        return (c - '0');
    else if ('a' <= c && c <= 'f')
        return (c - 'a' + 10);
    else if ('A' <= c && c <= 'F')
        return(c - 'A' + 10);
    return(0);
}

int ft_atoi_base(const char *str, int str_base)
{
    int result;
    int sign;

    result = 0;

    while(*str == '-' || *str == '+')
    {
        if(*str == '-')
            sign = -1;
        str++;
    }
    while(*str < 32)
        str++;
    while(*str)
    {
        if(!ft_valid(*str, str_base))
            return(0);
        result = result * str_base + ft_value(*str);
        str++;
    }
    return(sign * result);
}

int main()
{
    printf("%d", ft_atoi_base("101510", 5));
}
