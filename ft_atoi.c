#include "libft.h"

int         ft_atoi(char *str)
{
	int		number;
	int		sign;

	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
	{
		sign =  -1;
		str++;
	}
	if(*str == '+')
		str++;
	number = 0;
	while (ft_isdigit(*str))
	{
		number = number * 10 + *str - '0';
		str++;
	}
	return (sign * number);
}