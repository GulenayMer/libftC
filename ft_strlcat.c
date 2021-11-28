/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 13:59:46 by mgulenay          #+#    #+#             */
/*   Updated: 2021/11/27 02:35:39 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	s_length;
	size_t	d_length;

	s_length = ft_strlen(src);
	d_length = ft_strlen(dst);
	j = d_length;
	i = 0;
	if (d_length < size - 1 && size > 0)
	{
		while (src[i] != '\0' && (d_length + i < size - 1))
		{
		dst[j] = src[i];
		j++;
		i++;
		}
	dst[j] = '\0';
	}
	if (d_length >= size)
		d_length = size;
	return (d_length + s_length);
}
