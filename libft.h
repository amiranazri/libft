#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef enum e_bool
{
	false, true
}			t_bool;

char	*ft_strcpy(char *dest, const char *src);
size_t	ft_strlen(const char *str);
#endif
