#include "libft.h"

void *ft_memcpy(void *dest, const void *source, size_t count)
{
    while(count--)
       *((unsigned char *)dest++) = *((unsigned char *)source++);

    return (dest);
}