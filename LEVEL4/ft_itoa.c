#include <stdlib.h>
#include <stdio.h>

char *ft_itoa(int nbr)
{
	int n = nbr;
    int len;
    char *m;
    int sign;

    len = 0;
   
    if(nbr < 0)
    {
        sign = 1;
        nbr *= -1;
        len++;
    }
    
    while(n)
    {
        n = n / 10;
        len++;
    }

    m = (char *)malloc(sizeof(char) * len + 1);
    if(!m)
        return(NULL);
    
    m[len] = '\0';
    if (nbr == 0)
    {
        m[0] = '0';
        return(m);
    }
    while (len)
    {
        m[--len] = nbr % 10 + '0';
        nbr = nbr / 10;
    }    
    if(sign == 1)
        m[0] = '-';
    
    return(m);
}

// int main()
// {
//     int a = 780;

//     printf("%s\n", ft_itoa(a));
// }
