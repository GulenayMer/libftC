/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:23:09 by mgulenay          #+#    #+#             */
/*   Updated: 2021/12/05 12:48:58 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest || !src)
	{
		return (0);
	}
	i = 0;
	while (i < n)
	{
		((unsigned char *)(dest))[i] = ((unsigned char *)(src))[i];
		i++;
	}
	return (dest);
}
