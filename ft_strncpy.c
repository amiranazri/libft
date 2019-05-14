#include <unistd.h>
#include <string.h>

int     ft_putchar(char c)
{
    write(1, &c, 1);
    return(0);
}

void    ft_putstr(char *str)
{
    int i;

    i = 0;

    while(str[i])
    {
        ft_putchar(str[i]);
    }
}

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;
    while((i < n) && (src[i] != '\0'))
    {
        dest[i] = src[i];
        i++;
    }
    while(i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return dest;
}
