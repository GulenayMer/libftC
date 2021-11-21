/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:25:05 by mgulenay          #+#    #+#             */
/*   Updated: 2021/11/21 18:56:30 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char *p;
	
	p = s;
	while (*p != '\0' && n > 0)
	{
		if (*p == c)
		{
			return ((char *)p);
		}
			p++;
			n--;
	}	
return(NULL);
}
