#include "libft.h"

int ft_memcmp(const void *buf1, const void *buf2, size_t count)
{
  size_t i;
  int res;
  
  i = 0;
  res = 0;
  while(((unsigned char *)buf1)[i] && i < count)
  {
    res = ((unsigned char *)buf1)[i] - ((unsigned char *)buf2)[i];
    if(res != 0)
      return (res);
    i++;
  }
  return (0);
}