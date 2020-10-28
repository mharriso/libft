/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mharriso <mharriso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 15:56:18 by mharriso          #+#    #+#             */
/*   Updated: 2020/10/28 22:50:24 by mharriso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if ((const unsigned char *)src < (unsigned char *)dst)
		while (n--)
			((unsigned char *)dst)[n] = ((const unsigned char *)src)[n];
	else
		while (n--)
			*((unsigned char *)dst++) = *((const unsigned char *)src++);
	return (dst);
}
