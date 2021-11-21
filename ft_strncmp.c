/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:24:24 by mgulenay          #+#    #+#             */
/*   Updated: 2021/11/21 18:28:20 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		result;

	while (*s1 != '\0' && *s2 != '\0' && n > 0)
	{
		if (*s1 == *s2)
		{
		result = 0;
		}
		else if (*s1 < *s2)
		{
		result = -1;
		}
		else
		{
		result = 1;
		}
		s1++;
		s2++;
		n--;
	}
	return (result);
}
