#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	int	i;
	int	size;
	char	*s2;

	i = 0;
	size = 0;
	if(!(s2 = malloc(sizeof(char)* size + 1)))
		return (NULL);

	while(s1[i] && n != 0)
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

int	main()
{
	printf("%s", ft_strndup("bitch", 3));
	return (0);
}
