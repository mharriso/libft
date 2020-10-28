/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mharriso <mharriso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 18:38:13 by mharriso          #+#    #+#             */
/*   Updated: 2020/10/28 18:38:16 by mharriso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    char *res;
    int start, end, i;
    
    start = 0;
    end = ft_strlen(s1) - 1;
    while(ft_strchr(set, s1[start]))
        start++;
    while(ft_strchr(set, s1[end]))
        end--;
    res = malloc((end - start + 2) * sizeof(char));
    if(!res) 
        return NULL;
    i = 0;
    while(start != end + 1)
        res[i++] = s1[start++];
    res[i] = '\0';
    return (res);
}