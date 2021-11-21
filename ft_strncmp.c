/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:24:24 by mgulenay          #+#    #+#             */
/*   Updated: 2021/11/20 18:24:37 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
  int result;
  size_t i;
  i = 0;
   while(i < n)
   {
     if(*s1 == *s2)
    {
       result == 0;
    }
    else if(*s1 < *s2)
    {
      result < 0;
    }
    else
    {
      result > 0;
    }
     i++;
    *s1++;
    *s2++;
    return result;
   }
   
}
