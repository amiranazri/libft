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
