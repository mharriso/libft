#include "libft.h"

void *ft_memccpy(void *dest, const void *source, int ch, size_t count)
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
       if(src[i] == ch)
        return (dest);
       i++;
    }
    return (dest);
}
