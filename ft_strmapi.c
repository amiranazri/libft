

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    char *con;

    i = 0;
    while (s != NULL && f != NULL)
    {
        if (!(con = ft_strnew(ft_strlen(s))))
            return (NULL);
        while (*s)
        {
            con[i] = f(i, *s);
            s++;
            i++;
        }
    }
    return (con);
}
