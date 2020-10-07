#include "libft.h"


void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*src;
	size_t			i;

	src = (unsigned char*)b;
	i = 0;
	while (i < len)
		src[i++] = c;
		
	return (b);
}  

