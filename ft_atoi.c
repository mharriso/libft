#include "libft.h"

int         ft_atoi(char *str)
{
	int		number;
	int		sign;

	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		sign = (*str == '-') ? -1 : 1;
		str++;
	}
	else
		sign = 1;
	number = 0;
	while (ft_isdigit(*str))
	{
		number = number * 10 + *str - '0';
		str++;
	}
	return (sign * number);
}