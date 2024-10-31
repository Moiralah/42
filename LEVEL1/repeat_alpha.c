# include <unistd.h>

void ft_putchar (char c)
{
    write(1, &c, 1);
}

int main (int argc, char **argv)
{   
    int i;

    if (argc >= 2)
    {
        argv++; // to move to the 1st argument
        while (**argv)
        {   
            if ('A' <= **argv && **argv <= 'Z') 
                i = **argv - 'A';
            else if ('a' <= **argv && **argv <= 'z') 
                i = **argv - 'a';
            else
                i = 0;
            while (i >= 0)
            {
                ft_putchar(**argv);
                i--;
            }
            (*argv)++; // to move to the next characther in this current argument
            // if there is no '()' it gonna result to segmentation default
        }    
    }
    ft_putchar('\n');
    return (0);
}