

#include "libft.h"

char    *ft_strmap(char const *s, char (*f)(char))
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
            con[i] = f(*s);
            s++;
            con++;
        }
    }
    return (con);
}
