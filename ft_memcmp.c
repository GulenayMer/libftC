/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:25:52 by mgulenay          #+#    #+#             */
/*   Updated: 2021/11/20 18:26:05 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
  unsigned const char *p1 = s1;
  unsigned const char *p2 = s2;

  int result;
  size_t i;
  i = 0;
   while(i < n)
   {
     if(*p1 == *p2)
    {
       result == 0;
    }
    else if(*p1 < *p2)
    {
      result < 0;
    }
    else
    {
      result > 0;
    }
     i++;
    *p1++;
    *p2++;
    return result;
   }
}