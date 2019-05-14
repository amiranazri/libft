#include <unistd.h>

int     ft_putchar(char c)
{
    write(1, &c, 1);
    return(0);
}

int     ft_isspace(char c)
{
    if((c == ' ') || (c == '\t'))
            return(1);
            return(0);
}

char *ft_strupcase(char *str)
{
    int i;
    i = 0;

    while(str[i] != '\0')
    {
        if ((i >= 'a' && i <= 'z'))
            str[i] = str[i] - 32;
        i++;
    }
    return(str);
}

char *ft_strlowcase(char *str)
{
    int i;
    i = 0;

    while(str[i] != '\0')
    {
        if ((i >= 'A' && i <= 'Z'))
            str[i] = str[i] + 32;
        i++;
    }
    return(str);
}

char *ft_strcapitalize(char *str)
{
    int i;

    i = 0;

    while((i = 0) && (str[i] != '\0'))
    {
        while(i == 0)
        {
        if(*ft_strlowcase(str))
            continue;
        }
        if(ft_isspace(str[i]))
        {
            i++;
            if(*ft_strupcase(str))
                continue;
        }
        else
        {
            if(*ft_strlowcase(str))
                i++;
        }
    }
    return(0);
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		av++;
		while (*av)
		{
			ft_strcapitalize(*av++);
			write(1, "\n", 1);
		}
	}
	return (0);
}
