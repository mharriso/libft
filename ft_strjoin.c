#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t len;
    char *s;
    int i, j, k;
    len = ft_strlen(s1) + ft_strlen(s2);
    s = (char*)malloc((len + 1) * sizeof(char));
    i = 0;
    j = 0;
    k = 0;
    while (i <= len)
    {
        if (s1[j] != '\0')
            s[i] = s1[j++];
        else
            s[i] = s2[k++];
        i++;
    }
    s[i] = '\0';
    return (s);  
}