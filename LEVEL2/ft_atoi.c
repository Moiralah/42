# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

int ft_atoi(const char *str)
{
    int num;
    int sign;

    num = 0;
    sign = 1;

    while(*str == ' ' || *str == '+' || 9 <= *str && *str <= 13 ) // to iterate thru whitespace.
        str++;
    
    if(*str == '-')
    {
        sign = -1;
        str++;
    }

    while( '0' <= *str && *str <= '9')
    {
        num = num * 10 + (*str - '0'); // darab 10 so the number can move it way down in each iteration.
        str++;
    }
    return(num * sign);
}

int main()
{
    char c [] = "  --1234";

    printf("%d", atoi(c));
    printf("\n");
    printf("%d", ft_atoi(c));
    printf("\n");
    return (0);

}