# include <string.h>
# include <stdio.h>

size_t ft_strcspn(const char *s, const char *reject)
{
    int i;
    int j;

    i = 0;
    while(s[i])
    {
        j = 0; // j need to be initiate before the j loop for reset to check for subsequent i
        while(reject[j])
        {
            if(s[i] == reject[j])
                return(i);
            j++;
        }
        i++;
    }
    return(i);
}

int main()
{
    char s[] = "apakah";
    char reject[] = "kh";

    printf("%ld", strcspn(s, reject));
    printf("\n");
    printf("%ld", ft_strcspn(s, reject));
    printf("\n");

}