#include <unistd.h>

int ft_str_is_printable(char *str)
{
    int i;
    i = 0;

    while(str[i] = '\0')
    {
        return(1);
    }
    while(str[i])
    {
        if(!((str[i]) >= 0) && (str[i] <= 31) &&(str[i] = 127))
            return(0);
    }
    return(1);
}
