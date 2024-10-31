# include <stdio.h>
# include <string.h>

int ft_strcmp(char *s1, char *s2)
{
    int res;
    int i;

    res = 0;
    i = 0;

    while (s1[i] && s2[i] && s1[i] == s2[i])
    {
        i++;
    }
    res = s1[i] - s2[i];
    return (res);
}

int main ()
{
    char s1 [] = "wowo";
    char s2 [] = "wowo";
    char spos [] = "wow";
    char sneg [] = "wowow";

    printf("%d", strcmp(s1, s2));
    printf("\n");
    printf("%d", strcmp(s1, spos));
    printf("\n");
    printf("%d", strcmp(s1, sneg));
    printf("\n");
    printf("%d", ft_strcmp(s1, s2));
    printf("\n");
    printf("%d", ft_strcmp(s1, spos));
    printf("\n");
    printf("%d", ft_strcmp(s1, sneg));
    printf("\n");

}