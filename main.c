#include "libft.h"

/*
//ft_atoi.c
int	main () {
int x;
char str[30];

strcpy(str, "18061994");
x = atoi(str);
printf("String = %s, Integer = %d\n", str, x);

strcpy(str, "hey gurl");
x = atoi(str);
printf("with atoi: String = %s, Integer = %d\n", str, x);

return(0);
}

//ft_isalnum.c
int	main ()
{
char str[] = "mango tango";
int c = 8;

ft_bzero(str, c);
printf(str, c);
return(0);
}

//ft_isascii.c
int	main(void)
{
int n;

n = 'A';
printf("%d", ft_isalnum(n));

//ft_strndup.c
int	main()
{
	printf("%s", ft_strndup("mangotango", 5));
	return (0);
}

//ft_isalpa
int	main()
{
	char *str;
	str = "T'es de quelle origine?";
	ft_isalpha(str);
	printf("%d", ft_isalpha);
}

//ft_strcat.c
int		main(int ac, char **av)
{
	if (ac == 3)
		printf("%s", ft_strcat(av[1], av[2]));
}

//ft_strcmp.c
int		main()
{
	printf("%d", ft_strcmp("Hello", "Hello"));
}

//ft_strchr.c
int main ()
{
	const char str[] = "mango.tango";
	const char ch = '.';
	char *ret;

	ret = strchr(str, ch);
	printf("String after |%c| is - |%s|\n", ch, ret);
	return(0);
}

//ft_strdup.c
int	main(int ac, char **av)
{
	if (ac == 2)
		printf("%s\n", ft_strdup(av[1]));
	return (0);
}

//ft_strncat.c
int main ()
{
	char src[50], dest[50];

	strcpy(src,  "This is source");
	strcpy(dest, "This is destination");
	ft_strncat(dest, src, 15);
	printf("Final destination string : |%s|", dest);

	return(0);
}

//ft_strrchr.c
int		main()
{
	const char str[] = "hello.bitch.face.lol";
	const char ch = '.';
	char *ret;

	ret = strrchr(str, ch);
	printf("%s", ret);
	return (0);
}

//ft_strtrim.c
int		main()
{
	char *str;

	str = " Hello bitch ";
	ft_strtrim(str);
	printf("%s", str);
	return (0);
}

*/
int main(int ac, char **av)
{
	char 	**test;
	int	i;

	i = 0;
	test = NULL;
	if (ac == 3)
	{
		test = ft_strsplit(av[1], av[2][0]);
		while (test[i])
			printf("%s\n", test[i++]);
	}
	ft_putchar(10);
	return (0);
}
