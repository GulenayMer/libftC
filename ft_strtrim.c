/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 17:20:56 by mgulenay          #+#    #+#             */
/*   Updated: 2021/12/02 22:15:19 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char c, char const *chars)
{
	size_t	i;

	i = 0;
	while (chars[i] != '\0')
	{
		if (chars[i] == c)
		{
			return (1);
		}
	i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str_trim;
	size_t	i_begin;
	size_t	i_end;
	size_t	j;

	i_begin = 0;
	while (s1[i_begin] != '\0' && ft_check(s1[i_begin], set))
		i_begin++;
	i_end = ft_strlen(s1) - 1;
	while (i_end > i_begin && ft_check(s1[i_end], set))
		i_end--;
	str_trim = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) - i_begin + 1));
	if (!str_trim)
		return (0);
	j = 0;
	while (i_begin < i_end + 1)
	{
		str_trim[j] = s1[i_begin];
		i_begin++;
		j++;
	}
	str_trim[j] = '\0';
	return (str_trim);
}
