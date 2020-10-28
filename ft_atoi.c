/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mharriso <mharriso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 14:17:59 by mharriso          #+#    #+#             */
/*   Updated: 2020/10/28 22:00:21 by mharriso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int		number;
	int		sign;

	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	if (*str == '+')
		str++;
	number = 0;
	while (ft_isdigit(*str))
	{
		number = number * 10 + *str - '0';
		str++;
	}
	return (sign * number);
}
