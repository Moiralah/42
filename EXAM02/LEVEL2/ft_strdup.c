# include <string.h>
# include <stdlib.h>
# include <stdio.h>

char *ft_strdup(char *src)
{
    int i;
    char *dup;

    i = 0;
    while(src[i]) // why if put *src instead it give continuous while loop.
        i++;
    
    dup = (char *)malloc((i + 1) * sizeof(*dup));
    if(dup == NULL)
        return(NULL);
    
    i = 0;
    while(src[i])
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0';
    return(dup);    
}

int main()
{
    char str[] = "dupdap";
    char *src;
    char *src2;

    src = strdup(str);
    src2 = ft_strdup(str);

    printf("%s", src);
    printf("\n");
    printf("%s", src2);
    printf("\n");
    return(0);

}