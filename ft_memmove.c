/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:23:44 by mgulenay          #+#    #+#             */
/*   Updated: 2021/11/20 18:23:59 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
   unsigned char *p1 = dest;
   unsigned const char *p2 = src;
  
   size_t i=0;
   while(i < n)
  {
    // p1[i] = p2[i];
    *(p1+i) = *(p2+i);
    i++;   
  }
  return(*p1);

}