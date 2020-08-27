#include "ft_lib.h"

int ft_isalpha(int ch)
{
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        return 1;
    return 0;
}