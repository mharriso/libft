#include "libft.h"

size_t ft_strlcat (char *dst, const char *src, size_t size)
{
    size_t i;
    size_t j;

    i = ft_strlen(dst);
    j = 0;
    while(i < size - 1)
        dst[i++] = src[j++];
	
    dst[i] = '\0';
    return i + size;
}   
