

#include "libft.h"

t_bool  ft_is_space(int c)
{
    if ((c >= 9 && c <= 13) || c == 32)
        return (true);
	else
		return (false);
}

char    *ft_strtrim(char const *s)
{
    size_t i;
    size_t len;
    char *str;

    i = 0;
    len = ft_strlen(s);
    if (s == NULL)
        return (NULL);
        while (s[i] && ft_is_space(s[i]))
            i++;
        str = ft_strncpy(str, s, len);
        str[len] = '\0';
        return (str);
}
