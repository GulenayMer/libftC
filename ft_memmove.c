/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:23:44 by mgulenay          #+#    #+#             */
/*   Updated: 2021/11/22 14:58:27 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*p1;
	unsigned const char	*p2;
	unsigned char temp;
	
	size_t	i;
	
	p1 = dest;
	p2 = src;
	i = 0;
	while (i < n)
	{
		temp = *(p2 + i);
		*(p1 + i) = temp;
		i++;
	}
	return(p1);
}
