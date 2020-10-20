#include "libft.h" 

int main()
{
    printf("%21d | %21d\n", atoi(""), ft_atoi(""));
    printf("%21d | %21d\n", atoi("+"), ft_atoi("+"));
    printf("%21d | %21d\n", atoi("-"), ft_atoi("-"));
    printf("%21d | %21d\n", atoi("A"), ft_atoi("A"));
    printf("%21d | %21d\n", atoi("0"), ft_atoi("0"));
    printf("%21d | %21d\n", atoi("+999"), ft_atoi("+999"));
    printf("%21d | %21d\n", atoi("-999"), ft_atoi("-999"));
    printf("%21d | %21d\n", atoi("1234567890"), ft_atoi("1234567890"));
    printf("%21d | %21d\n", atoi("     999aaaa"), ft_atoi("      999aaaa"));
    printf("%21d | %21d\n", atoi("12345678901"), ft_atoi("12345678901"));
    printf("%21d | %21d\n", atoi("-12345678901"), ft_atoi("-12345678901"));
    return 0;
}