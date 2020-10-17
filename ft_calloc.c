#include "libft.h"

void * ft_calloc(size_t number, size_t size)
{
    void *s;

    if (!(s = malloc(number * size)))
        return (NULL);
    ft_bzero(s, number * size);
    return (s);
}