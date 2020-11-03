/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mharriso <mharriso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 16:08:34 by mharriso          #+#    #+#             */
/*   Updated: 2020/11/03 00:08:54 by mharriso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t		count_words(char const *s, char c)
{
	size_t	count;
	int	i;

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

int	word_len(char const *s, char c)
{
	int i;

	i = 0;
	while(*s)
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	len;
	size_t	word_len;
	int		i;


	if (!s)
		return (NULL);
	len = count_words(s, c);
	printf("%zu\n", count_words(s, c));
	if (!(res = (char**)malloc(len + 1 * sizeof(char*))))
		return (NULL);
	i = 0;
	while (i < len)
	{
		word_len = 0;
		while (*s++ != c)
			word_len++;

		if (!(res[i++] = create_word(s, c)))
			return NULL; //need clear
		s++;
	}
	return (res);
}
