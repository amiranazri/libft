#include "libft.h"

size_t	ft_token_count(char *str, int c)
{
    int 	i;
    size_t	count;
    t_bool	tested;

    i = 0;
    tested = false;
    count = 0;
    while (str[i])
    {
        if (str[i] == c && tested == false)
            count += 1;
	else if (str[i] == c && tested == true )
		i++;
	else
		tested = false;
        i++;
    }
    return (count);
}
