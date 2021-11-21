/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:22:33 by mgulenay          #+#    #+#             */
/*   Updated: 2021/11/20 18:22:44 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.c"

void ft_bzero(void *s, size_t n)
 {

    int i;
    i = 0;
    unsigned char *p = s;
    while(*p != 0 && n > 0)
   {
      *p = '0';
      p++;
      n--; 
   }

    return(b);
 }