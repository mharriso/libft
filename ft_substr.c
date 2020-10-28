/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mharriso <mharriso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 18:38:34 by mharriso          #+#    #+#             */
/*   Updated: 2020/10/28 18:38:36 by mharriso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *sub;
    unsigned int i, j;
    
    if (!(sub = (char*)malloc((len + 1) * sizeof(char))))
        return (NULL);
    i = start;
    j = 0;
    while(i < (len + start) && s[i])
        sub[j++] = s[i++];
    sub[j] = '\0';
    return (sub);
}