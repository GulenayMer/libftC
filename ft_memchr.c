/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:25:05 by mgulenay          #+#    #+#             */
/*   Updated: 2021/11/20 18:25:16 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
unsigned char *p1 = s;
size_t i;
i = 0;
while(i < n)
{
  if(p1 != NULL && *p1 == c)
{

*p1++;
return *p1;

}
else
{
  return NULL;
}
}
}
