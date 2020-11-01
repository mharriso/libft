/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mharriso <mharriso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 18:38:13 by mharriso          #+#    #+#             */
/*   Updated: 2020/10/31 23:06:34 by mharriso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	char	*res;
	int		start;
	int		end;
	int		i;

	if (!s || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s) - 1;
	if (end < 0)
		return ((char *)s);
	while (ft_strchr(set, s[start]))
		start++;
	while (ft_strchr(set, s[end]))
		end--;
	if (!(res = malloc((end - start + 2) * sizeof(char))))
		return (NULL);
	i = 0;
	while (start != end + 1)
		res[i++] = s[start++];
	res[i] = '\0';
	return (res);
}
