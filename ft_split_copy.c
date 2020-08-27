#include "ft_lib.h"

char **create_array_c(char const *s, char c, int* len)
{
    int i;

    i = 1;
    *len = 1;
    while (s[i++])
        if (s[i] == c && s[i - 1] != c)
            (*len)++;
    return (char**)malloc(((*len) + 1) * sizeof(char*));
}

char *create_word(char const *s, char c, int* end)
{
        int start;
        int i;
        char *word;
        
        i = *end;
        while (s[i] == c)
            i++;
        start = i;
        while (s[i] != c)
            i++;
        *end = i - 1;
        word = (char*)malloc((*end) - start + 2);
        i = 0;
        while (start != ((*end) + 1))
            word[i++] = s[start++];
        word[i] = '\0';
        (*end)++; 
        return word;   
}
char **ft_split_copy(char const *s, char c)
{
    int j;
    int end;
    int len;
    char **result, *s1 = NULL;
    
    if (s)
        s1 = ft_strtrim(s, &c);
    if(!s1)
        return (NULL);  
    result = create_array_c(s1, c, &len);
    j = 0;
    end = 0;
    while (j != len)
    {
        result[j] = create_word(s1, c, &end);
        j++;
    }
    result[j] = NULL;
    return (result);
}