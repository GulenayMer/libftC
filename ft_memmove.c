/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:23:44 by mgulenay          #+#    #+#             */
/*   Updated: 2021/11/28 00:25:06 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  #include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*p1;
	char	const	*p2;
	size_t	i;

	p1 = (char *)dest;
	p2 = (char *)src;
	i =  -1;
	if (p2 < p1)
		while (n >= 0)
		{
			*(p1 + n) = *(p2 + n);
			n--;
		}
	else
	{
		while (i < n)
		{
			*(p2 + i) = *(p1 + i);
			i++;
		}
	}
	return (p1);
} 
 */