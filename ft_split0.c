/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split0.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mharriso <mharriso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 17:49:39 by mharriso          #+#    #+#             */
/*   Updated: 2020/11/03 16:36:23 by mharriso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int count(char const *s, char c, int* len)
{
    int i;

    i = 1;
    *len = 0;
    while (s[i])
    {
        if (s[i] == c && s[i - 1] != c)
            (*len)++;
        i++;
    }
    (*len)++;
    return *len;
}

char **ft_split0(char const *s, char c)
{
    int i, j;
    int start;
    int end;
    int len;
    char **result;

    if(!s[0] && !s[1])
    {
        if (s[0] == c)
            return (NULL);
    }
	count(s, c, &len);
	printf("%d\n", len);
    result = (char**)malloc((len + 1) * sizeof(char*));
    j = 0;
    end = 0;
    while (j != len)
    {
		
        i = end;
        while (s[i] == c)
            i++;
        start = i;
        while (s[i] != c)
            i++;
        end = i - 1;
        result[j] = (char*)malloc(end - start + 2);
        i = 0;
        while (start != (end + 1))
        {
            result[j][i++] = s[start++];
        }
        result[j][i] = '\0';
        j++;
        end++;
    }
    result[j] = NULL;
    return (result);
}
