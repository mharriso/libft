#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *str;
    unsigned int i;

    str = malloc(ft_strlen(s) + 1);
    i = 0;
    while(s[i])
    {
        str[i] = f(i, s[i]);
        i++;
    }
    return (str);
}