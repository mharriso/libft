#include "libft.h"

size_t ft_strlcat (char *dst, const char *src, size_t size)
{
    size_t i;
    size_t j;

    i = ft_strlen(dst);
    j = 0;
    //printf("\n%zu %zu\n", i, size);
    while(i < size - 1)
    {
        dst[i] = src[j];
	j++;
        i++;
    }
    dst[i] = '\0';
    //printf("\n%zu", i+size);
    return i + size;
}   
