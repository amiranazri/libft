
#include "libft.h"

void    *ft_striteri(char *s, void (*f) (unsigned int, char *))
{
    unsigned int len;

    len = 0;
    if (s != NULL && f != NULL)
    {
        while(s[len])
        {
            f(len, s);
            s++;
            len++;
        }
    }
    return (0);
}
