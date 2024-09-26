#include <stdio.h>
#include <string.h>

size_t ft_strspn(const char *s, const char *accept)
{
    int i;

    i = 0;
    while(s[i] || accept[i])
    {
        if (accept[i] != s[i])
            return(i);
        i++;
    }
    return(i);
}

int main()
{
    char s[] = "yang tak jadi";
    char accept[] = "yan";

    printf("%ld\n", strspn(s, accept));
    printf("%ld\n", ft_strspn(s, accept));

}