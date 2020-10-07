#include "libft.h"

void *ft_memcpy(void *dest, const void *source, size_t count)
{
    unsigned char	*res;
    unsigned char  *src;
	size_t			i;

    //res = (unsigned char*)dest;
    src = (unsigned char*)source;
    i=0;
    while(i < count)
    {
       ((unsigned char*)dest)[i] = src[i];
       i++;
    }
    return (dest);
}