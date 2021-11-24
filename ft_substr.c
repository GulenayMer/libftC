/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:37:00 by mgulenay          #+#    #+#             */
/*   Updated: 2021/11/24 16:42:06 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;
	
	i = 0;
	while ( s[i] != '\0')
	{
		i++;
    
	start = 0;
	while (start < len)
	{
		subs[start] = s[i + start - 1];
		//malloc(len);
		start++;
	}
	i++;
	}
	subs[start] = '\0';
	
	if(!subs)
	{
		return (NULL);
	}
	return(subs);
}
