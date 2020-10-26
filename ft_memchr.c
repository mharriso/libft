#include "libft.h"

void *ft_memchr(const void *arr, int c, size_t n)
{
    while(n--)
        if(*((unsigned char *)arr++) == c)
            return (void *)arr - 1;
    return (NULL);
}