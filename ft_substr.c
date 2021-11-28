/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:37:00 by mgulenay          #+#    #+#             */
/*   Updated: 2021/11/27 16:50:40 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;
	size_t	j;

	subs = (char *)malloc(len);
	i = 0;
	j = start;
	while (i < ft_strlen(s) && j < len)
	{
		subs[i] = s[j];
		i++;
		j++;
	}
	subs[j] = '\0';
	return (subs);
}
