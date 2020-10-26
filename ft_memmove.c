#include "libft.h"

void *ft_memmove (void *dst, const void *src, size_t n)
{
	if ((const unsigned char *)src < (unsigned char *)dst)
		while (n--)
			((unsigned char *)dst)[n] = ((const unsigned char *)src)[n];
	else
		while (n--)
			*((unsigned char *)dst++) = *((const unsigned char *)src++);
	return (dst);
}