/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelectra <nelectra@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 01:19:40 by nelectra          #+#    #+#             */
/*   Updated: 2020/05/01 01:24:57 by nelectra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

/*
** The strlen() function computes the length of the string s.
*/

size_t	ft_strlen(const char *s)
{
	size_t index;

	index = 0;
	while (s[index] != '\0')
		index++;
	return (index);
}
