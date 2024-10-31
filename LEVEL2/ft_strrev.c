# include <stdio.h>

char    *ft_strrev(char *str)
{
    int i; // show end of string
    int j; // show start of string
    char temp;

    i = 0;
    j = 0;

    while(str[i])
        i++;

    while(i > j) // swap place from back n front till the middle
    {
        i--;
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
        j++;
    }
    return(str);
}

int main()
{
    char str [] = "wala";    
    printf("%s\n", ft_strrev(str));
    return (0);
}