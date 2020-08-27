
#include "ft_lib.h"
#include <stdio.h>
#include <string.h>

char aaa(unsigned int num, char ch)
{
    return (ch + num);
}


int main(void) 
{
    
    
    
    
    
    //printf("%s", memset("abcdef", 'a', 3));
    
    
   
    
    
    
    //for(int chr = 32; chr < ,27; chr++)
    //printf("№%-4d| %c |%5d\n", chr, chr, ft_isalpha(chr));
    char **arr;
    arr = ft_split_copy("a b c d e f g", ' ');
    for (size_t i = 0; arr[i]; i++)
    {
        printf("%s\n", arr[i]);
    }

    //printf("%s\n", ft_strmapi("abcdefgz", aaa));
    
    //printf("%s2\n", ft_strtrim(",2345   abcabdfihsgdfi", " ,3452"));
    return 0;
}