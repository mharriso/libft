/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mharriso <mharriso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 17:51:50 by mharriso          #+#    #+#             */
/*   Updated: 2020/10/28 17:56:27 by mharriso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *str;
    unsigned int i;

    str = malloc(ft_strlen(s) + 1);
    i = 0;
    while(s[i])
    {
        str[i] = f(i, s[i]);
        i++;
    }
    return (str);
}
