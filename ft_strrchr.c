/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:21:23 by mgulenay          #+#    #+#             */
/*   Updated: 2021/11/21 15:27:25 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char   *ft_strrchr(const char *s, int c)
{
	char *p;
	p = NULL;
	while (*s)
	{
		if (*s == c)
		{
			p = ((char *)s);
		
		}
			
	}
	s++;
	if (*s == c)
		{
			return ((char *)s);
		
		}
	else
	{
	return (p);	
	}
}

