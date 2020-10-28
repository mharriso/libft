/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mharriso <mharriso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 15:47:50 by mharriso          #+#    #+#             */
/*   Updated: 2020/10/28 15:47:52 by mharriso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *arr, int c, size_t n)
{
    while(n--)
    {
        if(*((unsigned char *)arr) == c)
            return (void *)arr;
        (unsigned char *)arr++;
    }
    return (NULL);
}