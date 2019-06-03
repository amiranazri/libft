

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    size_t i;
    char *ret;
    
    i = 0;
    ret = ((char *)malloc(sizeof ret) * (s1, s2))
    if (s1 == NULL || s2 == NULL || ret == NULL)
        return (NULL);
    while (s1 != '\0')
    {
        ret[i] = *s1;
        i++;
        s1++;
    }
    while (s2 != '\0')
    {
        ret[i] = *s2;
        i++;
        s2++;
    }
    ret[i] = '\0';
    return (ret);
}
