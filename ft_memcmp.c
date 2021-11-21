/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:25:52 by mgulenay          #+#    #+#             */
/*   Updated: 2021/11/21 18:43:19 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*p1;
	unsigned const char	*p2;
	int		result;

	p1 = s1;
	p2 = s2;
	while (*p1 != '\0' && *p2 != '\0' && n > 0)
	{
		if (*p1 == *p2)
		{
		result = 0;
		}
		else if (*p1 < *p2)
		{
		result = -1;
		}
		else
		{
		result = 1;
		}
	p1++;
	p2++;
	}
	return (result);
}
