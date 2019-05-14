#include <unistd.h>
#include <string.h>

int     ft_strlen(char *str)
{
    int length;
    
    length = 0;
    while(str[length])
        length++;
    return (length);
}

unsigned int ft_strlcat(char *dest, char *src, unisgned int size)
{
	int a;
    int b;
    int res;

	a = 0;
	b = 0;
	res = ft_strlen(src);
	
    while((dest[a]) && (a < size))
		a++;
	
    if (size > 0)
	{
		while ((src[b]) && (a < (size - 1)))
		{
			dest[a++] = src[b++];
		}
	}
	if (b > 0)
	{
		dest[a] = '\0';
		return (result + (a - b));
	}
	return (result + a);
}