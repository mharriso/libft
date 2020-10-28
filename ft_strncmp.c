/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mharriso <mharriso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 17:58:37 by mharriso          #+#    #+#             */
/*   Updated: 2020/10/28 18:00:49 by mharriso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
  size_t i;
  
  i = 0;
  while(s1[i] && i < n)
  {
    if(s1[i] != s2[i])
      return (s1[i] - s2[i]);
    i++;
  }
  return (0);
}
