/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 17:20:56 by mgulenay          #+#    #+#             */
/*   Updated: 2021/11/28 16:11:51 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str_tr;
	size_t	start;
	size_t	length;
	size_t	i;
	size_t	j;

	start = 0;
	while (s1[start] != '\0' && ft_set(s1[start], set))
		start++;
	length = ft_strlen(s1);
	j = length - 1;
	while (s1[j] && start < length && ft_set(s1[j], set))
		j--;
		length--;
	str_tr = (char *)malloc(sizeof(*s1) * (length - (j + start) + 1));
	i = 0;
	while (start < length)
	{
		str_tr[i] = s1[start];
		i++;
		start++;
	}
	str_tr[i] = '\0';
	return (str_tr);
}
