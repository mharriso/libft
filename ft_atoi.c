/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mharriso <mharriso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 14:17:59 by mharriso          #+#    #+#             */
/*   Updated: 2020/11/01 03:23:50 by mharriso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	long		number;
	int			sign;

	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	number = 0;
	while (ft_isdigit(*str))
	{
		if (number > INT_MAX && sign == 1)
			return (-1);
		if (number > (long)INT_MAX + 1 && sign == -1)
			return (0);
		number = number * 10 + *str - '0';
		str++;
	}
	return (sign * number);
}
