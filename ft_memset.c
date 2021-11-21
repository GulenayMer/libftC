/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:22:01 by mgulenay          #+#    #+#             */
/*   Updated: 2021/11/20 18:22:13 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
 {
   
      int i;
      i = 0;
      unsigned char *p = s;
   while(*p != 0 && n > 0)
   {
       *p = c;
       p++;
       n--;
     
      return(b);
   }
 }
