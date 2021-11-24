/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:00:41 by mgulenay          #+#    #+#             */
/*   Updated: 2021/11/23 23:39:20 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *nptr)
{
	int 	result;
	int		i;
	int 	sign;
	
	sign = 1;
	i = 0;
	if (nptr[0] == '-')
	{
		sign = -1;
		i++;
	}

	result = 0;
	while (nptr[i] != '\0')
	{
		result = result * 10 + nptr[i] - '0';
		i++;
	}
	return (sign * result);
}
