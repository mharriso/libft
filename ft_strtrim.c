#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    char *res;
    int start, end, i;
    start = 0;
    end = ft_strlen(s1) - 1;
    while(strchr(set, s1[start]))
        start++;
    while(strchr(set, s1[end]))
        end--;
    res = malloc((end - start + 2) * sizeof(char));
    if(!res) return NULL;
    i = 0;
    while(start != end + 1)
        res[i++] = s1[start++];
    res[i] = '\0';
    return res;
}