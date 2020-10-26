#include "libft.h" 

void atoi_test()
{
    printf("%21d | %21d\n", atoi("6442450944"), ft_atoi("6442450944"));

    printf("%21d | %21d\n", atoi(""), ft_atoi(""));
    printf("%21d | %21d\n", atoi("+"), ft_atoi("+"));
    printf("%21d | %21d\n", atoi("-"), ft_atoi("-"));
    printf("%21d | %21d\n", atoi("A"), ft_atoi("A"));
    printf("%21d | %21d\n", atoi("0"), ft_atoi("0"));
    //printf("%21d | %21d\n", atoi(NULL), ft_atoi(NULL)); // segmetation fault
    printf("%21d | %21d\n", atoi("+999"), ft_atoi("+999"));
    printf("%21d | %21d\n", atoi("-999"), ft_atoi("-999"));
    printf("%21d | %21d\n", atoi("12345678901"), ft_atoi("12345678901"));
    printf("%21d | %21d\n", atoi("-12345678901"), ft_atoi("-12345678901"));
    printf("%21d | %21d\n", atoi("2147483647"), ft_atoi("2147483647"));  //INT_MAX
    printf("%21d | %21d\n", atoi("-2147483648"), ft_atoi("-2147483648")); //INT_MIN
     printf("%21d | %21d\n", atoi("2147483648"), ft_atoi("2147483648"));  //INT_MAX + 1
    printf("%21d | %21d\n", atoi("-2147483649"), ft_atoi("-2147483649")); //INT_MIN - 1
    
}

void strlcpy_test()
{
   char  buf1[10] = "21";
   char  buf2[10] = "21";   
   const char *str = "sssssssssss";
   size_t sz1, sz2;
               
   printf("строка: \"%s\"\n\n", str);
   printf("буфер перед копированием: \"%s\"\n", buf1);


   sz1 = ft_strlcpy(buf1, str, 10);    
   if (sz1 >= sizeof(buf1))      
      printf("обнаружено усечение строки с %zu до %lu символов!\n", sz1, sizeof(buf1)-1);
   printf("буфер после копирования:  \"%s\"\nsize = %zu\n", buf1, sz1);


   printf("буфер перед копированием: \"%s\"\n", buf2);
   sz2 = strlcpy(buf2, str, 10);    
   if (sz2 >= sizeof(buf2))      
      printf("обнаружено усечение строки с %zu до %lu символов!\n", sz2, sizeof(buf2)-1);
   printf("буфер после копирования:  \"%s\"\nsize = %zu\n", buf2, sz2);
}

void strdup_test()
{
   printf("%s$\n", strdup(""));
   printf("%s$\n", strdup("string duplicate"));
   printf("%s$\n", strdup("8888888888888888888888888888888888888888888888888888888888888"));
}
void cmp_test()
{
   printf("%5d%5d\n", memcmp("123456", "123457", 3), ft_memcmp("123456", "123457", 3));
   printf("%5d%5d\n", memcmp("123456", "123458", 6), ft_memcmp("123456", "123458", 6));
   printf("%5d%5d\n", memcmp("123 Y", "123 B", 0), ft_memcmp("123 Y", "123 B", 0));
   printf("%5d%5d\n", memcmp("123456", "123457", 10), ft_memcmp("123456", "123457", 10));
   printf("%5d%5d\n", memcmp("123 A", "123 Z", 6), ft_memcmp("123 A", "123 Z", 6));
   printf("%5d%5d\n", memcmp("123 Y", "123 B", 6), ft_memcmp("123 Y", "123 B", 6));
   printf("%5d%5d\n", strncmp("123 Y", "123 B", 6), ft_strncmp("123 Y", "123 B", 6));
   printf("%5d%5d\n", strncmp("123 a", "123 z", 6), ft_strncmp("123 a", "123 z", 6));
}
void mem_test()
{
   // Исходный массив данных
   unsigned char src[11]="1234567890";

   // Вывод массива src на консоль
   printf ("src old: %s\n",src);

   // Копируем 3 байт
  ft_memcpy (&src[1], &src[7], 3); //memmove 1890567890

   // Вывод массива src на консоль
   printf ("src new: %s\n",src);
}

int main()
{
    atoi_test();
    //strlcpy_test();
    //strdup_test();
    //cmp_test();
    //mem_test();
    return 0;
}