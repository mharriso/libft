/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mharriso <mharriso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2020/10/29 16:08:34 by mharriso          #+#    #+#             */
/*   Updated: 2020/11/03 00:08:54 by mharriso         ###   ########.fr       */
=======
/*   Created: 2020/10/28 17:49:39 by mharriso          #+#    #+#             */
/*   Updated: 2020/10/29 16:25:04 by mharriso         ###   ########.fr       */
>>>>>>> d428d0fa4218817e32e58df692c667f9f4f9fa00
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static  size_t    count_words(char const *s, char c)
{
  size_t  count;
  int  i;

<<<<<<< HEAD
static	size_t		count_words(char const *s, char c)
=======
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
static  char **free_words(char **array)
>>>>>>> d428d0fa4218817e32e58df692c667f9f4f9fa00
{
	size_t		i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}
char  **ft_split(char const *s, char c)
{
  char  **res;
  size_t  len;
  size_t  word_len;
  size_t  i;
  size_t  j;


<<<<<<< HEAD

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
=======
  if (!s)
    return (NULL);
  len = count_words(s, c);
  printf("%ld\n\n", count_words(s, c));
  if (!(res = (char**)malloc(len + 1 * sizeof(char*))))
    return (NULL);
  i = 0;
  j = 0;
  while (j < len + (!len))
  {
    word_len = 0;
    while(s[i] == c)
      i++;
    while (s[i] != c && s[i])
    {
      word_len++;
      i++;
    }
    printf("%ld  i = %2ld len = %2ld\n", j, i, word_len);
    if (!(res[j] = calloc((word_len + 1), sizeof(char))))
      return free_words(res);
    res[j] = ft_memcpy(res[j], s + (i - word_len), word_len);
    
    j++;
  }
  res[j] = NULL;
  return (res);
>>>>>>> d428d0fa4218817e32e58df692c667f9f4f9fa00
