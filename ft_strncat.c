#include <unistd.h>
#include <stdio.h>

char    *ft_strncat(char *dest, char *src, int nb)
{
    int a;
    int b;

    a = 0;
    b = 0;

    while(dest[a] != '\0')
    {
        a++;
    }

    while((src[b] != '\0') && (b < nb))
    {
        src[a + b] = dest[a];
        a++;
    }
    dest[a + b] = '\0';
        return(dest);
}

int main()
{
      char str1[30] = "I am ";
      char str2[30] = "cute but deadly";
      ft_strncat(str1, str2, 4);
      printf("%s", str1);
      return 0;
}
