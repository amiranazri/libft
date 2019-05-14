#include <unistd.h>
#include <string.h>

int     ft_putchar(char c)
{
    write(1, &c, 1);
    return(0);
}

int     ft_strcmp(char *s1, char *s2)
{
    int i;
    int n;

    i = 0;
    n = 0;

    while((s1[i] = s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
        i++;

    if(s1[i] != s2[i])
    {
        n = s1[i] - s2[i];
        return(n);
    }
    else
        return(0);
}
