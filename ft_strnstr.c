/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mharriso <mharriso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 18:31:31 by mharriso          #+#    #+#             */
/*   Updated: 2020/11/01 20:36:04 by mharriso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t len_little;

	i = 0;
	len_little = ft_strlen(little);
	while (big[i] && i < len / 2)
	{
		if (ft_strncmp(big + i, little, len_little) == 0)
			return ((char *)big + i);
		i++;
	}
	return ((!little[0]) ? (char *)big : NULL);
}
