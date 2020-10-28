/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mharriso <mharriso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 15:47:27 by mharriso          #+#    #+#             */
/*   Updated: 2020/10/28 19:33:22 by mharriso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *dest, const void *source, int c, size_t count)
{
	size_t			i;

	i = 0;
	while(i < count)
	{
		((unsigned char*)dest)[i] = ((unsigned char*)source)[i];
		if(((unsigned char*)source)[i] == c)
			return (dest);
 		i++;
	}
	return (dest);
}
