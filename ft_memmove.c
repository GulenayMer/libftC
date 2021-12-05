/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:23:44 by mgulenay          #+#    #+#             */
/*   Updated: 2021/12/05 15:57:23 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if ((unsigned char *)src < (unsigned char *)dest)
	{	
		i = n;
		while (i--)
		{
			((unsigned char *)(dest))[i] = ((unsigned char *)(src))[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
		((unsigned char *)(dest))[i] = ((unsigned char *)(src))[i];
		i++;
		}
	}
	return (dest);
	return (0);
}
