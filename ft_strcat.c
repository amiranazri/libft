#include <unistd.h>
#include <string.h>

char *ft_strcat(char *dest, char *src)
{
    int a;
    int b;

    a = 0;
    b = 0;

    if(dest == NULL)
        return(NULL);

    while(dest[a])
    {
        a++;
    }
    
    while(src[a])
    {
        dest[a] = src[b];
        a++;
        b++;
    }
    if(src[a] == '\0')
    {
        return(dest);
    }
    return(0);
}

#include <stdio.h>

int     main()
{
    char a[50] = "Hello!";
    char b[50] = "What is your name?";

    ft_strcat(a, b);
    printf("concatenated string = %s\n", a);
    getchar();
}
