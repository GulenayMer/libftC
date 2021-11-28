/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 16:52:21 by mgulenay          #+#    #+#             */
/*   Updated: 2021/11/27 17:19:16 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	s1_length;
	size_t	s2_length;
	size_t	i;
	size_t	j;

	s1_length = ft_strlen(s1);
	s2_length = ft_strlen(s2);
	new_str = (char *)malloc(s1_length + s2_length + 1);
	i = 0;
	while (i < s1_length)
	{
		new_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < s2_length)
	{
		new_str[i] = s2[j];
		i++;
		j++;
	}
	new_str[i + j] = '\0';
	return (new_str);
	return (0);
}
