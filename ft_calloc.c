/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:00:55 by mgulenay          #+#    #+#             */
/*   Updated: 2021/11/24 02:05:02 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmem, size_t size)
{
	void	*p;

	p = (char *)malloc(nmem * size);
	if (p == 0)
	{
		return (NULL);
	}
	ft_bzero(p, nmem * size);
	return (p);
}
