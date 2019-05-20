#include "libft.h"

t_bool  is_digit(int c)
{
    if (c >= 48 && c <= 57)
        return (true);
    return (false);
}

t_bool  is_space(int c)
{
    if ((c >= 9 && c <= 13) || c == 32)
        return (true);
    return (false);
}

int     ft_atoi(char *str)
{
    int num;
    int sign;
    int i;

    i = num = 0;
    sign = 1;

    while (is_space(str[i]))
        i++;
    if (str[i] == 45 || str[i] == 43)
    {
        if (str[i] == 45)
            sign = -1;
        i++;
    }

    while (is_digit(str[i]))
    {
        num = (num * 10) + (str[i] - 48);
        i++;
    }

    return (num * sign);
}
