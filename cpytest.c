#include <string.h>
#include <stdio.h>  
#include "libft.h" 
//#include <bsd/string.h>                  

char  buf1[10] = "67";
char  buf2[10] = "67";   // буфер размером меньше строки

int main(void)
{
   const char *str = "sssssssssss";
   size_t sz1, sz2;
               
   printf("строка: \"%s\"\n\n", str);
   printf("буфер перед копированием: \"%s\"\n", buf1);


   sz1 = strlcpy(buf1, str, sizeof(buf1));    
   if (sz1 >= sizeof(buf1))      
      printf("обнаружено усечение строки с %zu до %lu символов!\n", sz1, sizeof(buf1)-1);
   printf("буфер после копирования:  \"%s\"\n\n", buf1);



   printf("буфер перед копированием: \"%s\"\n", buf2);
   sz2 = ft_strlcpy(buf2, str, sizeof(buf2));    
   if (sz2 >= sizeof(buf2))      
      printf("обнаружено усечение строки с %zu до %lu символов!\n", sz2, sizeof(buf2)-1);
   printf("буфер после копирования:  \"%s\"\n", buf2);

   return 0;
}
