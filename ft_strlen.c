/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:19:58 by mgulenay          #+#    #+#             */
/*   Updated: 2021/11/20 22:02:20 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t    ft_strlen(const char *s)
{
  int length;
  length = 0;
  while(*s!='\0')
    {
      length++;
    }

	return(length);
}