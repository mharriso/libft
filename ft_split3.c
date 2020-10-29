/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mharriso <mharriso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 16:08:34 by mharriso          #+#    #+#             */
/*   Updated: 2020/10/29 17:53:42 by mharriso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (s[i] && s[i + 1])
	{
		if (s[i] != c && s[i + 1] == c)
			count++;
		i++;
	}
	count += (s[i] != c && s[0]) ? 1 : 0;
	return (count);
}

char	**ft_split3(char const *s, char c)
{
	char **res;
	int len;

	if (!s)
		return (NULL);
	len = count_words(s, c);
	res = (char**)malloc((len + 1 * sizeof(char*));
	printf("%d\n", count_words(s, c));
	return (NULL);
}
