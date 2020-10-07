#include "libft.h"

int digits(int n)
{
    int i;

    i = 1;
    while(n/=10)
        i++;
    return i;
}

char *ft_itoa(int n)
{ 
    char *str;
    int minus = 0;
    int len;

    if(n == 0)
        return "0";
    if(n < 0)
    {
        n *= -1;
        minus = 1;
    }
    len = digits(n) + minus;
    str = malloc((len + 1) * sizeof(char));
    if(minus)
        str[0] = '-';

    str[len] = '\0';
    len--;
    while(n)
    {
        str[len--] = n%10 + '0';
        n /= 10;
    }
    return str;
}