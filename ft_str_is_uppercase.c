#include <unistd.h>

int ft_str_is_uppercase(char *str)
{
    int i;
    i = 0;

    while(str[i])
    {
        if(((str[i]) >= 65) && (str[i] <= 90))
            return(1);
    }
    return(0);
}
