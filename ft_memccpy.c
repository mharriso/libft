#include "libft.h"

void *ft_memccpy(void *dest, const void *source, int c, size_t count)
{
	size_t			i;

    i = 0;
    while(i < count)
    {
       ((unsigned char*)dest)[i] =  ((unsigned char*)source)[i];
       if(((unsigned char*)source)[i] == c)
        return (dest);
       i++;
    }
    return (dest);
}
