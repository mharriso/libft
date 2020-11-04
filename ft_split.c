/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mharriso <mharriso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 17:49:39 by mharriso          #+#    #+#             */
/*   Updated: 2020/11/04 04:45:27 by mharriso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	count_words(char const *s, char c)
{
	size_t		count;
	int			i;

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

static	char	**free_words(char **array)
{
	size_t	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char		**res;
	size_t		len;
	size_t		word_len;
	size_t		i;
	size_t		j;

	if (!s)
		return (NULL);
	len = count_words(s, c);
	if (!(res = (char**)malloc((len + 1) * sizeof(char*))))
		return (NULL);
	i = 0;
	j = 0;
	while (j < len)
	{
		word_len = 0;
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i])
		{
			word_len++;
			i++;
		}
		if (!(res[j] = calloc((word_len + 1), sizeof(char))))
			return (free_words(res));
		res[j] = ft_memcpy(res[j], s + (i - word_len), word_len);
		j++;
	}
	res[j] = NULL;
	return (res);
}
