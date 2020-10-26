#include "libft.h"

void *ft_memcpy(void *dest, const void *source, size_t count)
{
	size_t			i;

    i = 0;
    while(i < count)
    {
       ((unsigned char*)dest)[i] = ((unsigned char*)source)[i];
       i++;
    }
    return (dest);
}