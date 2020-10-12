#include "libft.h"
#include <stdio.h>
#include <string.h>

char aaa(unsigned int num, char ch)
{
    return (ch + num);
}


int main(void) 
{
    
    
    char *str = ft_calloc(4, 1);
    for (size_t i = 0; i < 3; i++)
    {
        str[i] = '0' + i;
    }
    
    printf("%s\n", str);
    
    
    //printf("%s", memset("abcdef", 'a', 3));
    
    //for(int chr = 32; chr < ,27; chr++)
    //printf("№%-4d| %c |%5d\n", chr, chr, ft_isalpha(chr));
    /*char **arr;
    arr = ft_split_copy("a b c d e f g", ' ');
    for (size_t i = 0; arr[i]; i++)
    {
        printf("%s\n", arr[i]);
    }*/


    //printf("%s\n", ft_strmapi("abcdefgz", aaa));
    
    //printf("%s2\n", ft_strtrim(",2345   abcabdfihsgdfi", " ,3452"));
    return 0;
}