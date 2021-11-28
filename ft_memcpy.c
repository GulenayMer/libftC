/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:23:09 by mgulenay          #+#    #+#             */
/*   Updated: 2021/11/27 03:53:43 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*p1;
	char const *p2;
	size_t	i;

	p1 = dest;
	p2 = src;
	i = 0;
	while (i < n)
	{
		*(p1 + i) = *(p2 + i);
		i++;
	}
	return (p1);
}
