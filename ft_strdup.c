#include "libft.h"

char *ft_strdup(const char *str)
{
    size_t i;
    char *dup;
    
    if(!(dup = malloc(ft_strlen(str) + 1 * sizeof(char))))
        return (NULL);
    i = 0;
    while(str[i])
    {
        dup[i] = str[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}