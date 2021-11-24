/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:00:30 by mgulenay          #+#    #+#             */
/*   Updated: 2021/11/22 18:12:51 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char 	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t 	len_little;
	char	*p;
	size_t 	i;
	size_t 	j;
	
	p = (char *)big;
	len_little = ft_strlen(little);

	if(len_little == 0 || p == little)
	{
		return (p);	
	}
	while(*p!= '\0' && i < len)
	{
		j = 0;
		while (p[i + j] != '\0' && little[j] != '\0' &&
		p[i + j] == little[j] && i + j < len)
		{
			if(j == len_little)
			{
				return (p + i);
			}
		j++;
		
		}
	i++;
	}
	return (0);
}
