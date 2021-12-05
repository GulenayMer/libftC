/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 20:13:19 by mgulenay          #+#    #+#             */
/*   Updated: 2021/12/02 22:06:25 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_length(int number)
{
	int	len_count;

	len_count = 0;
	if (number <= 0)
	{
		len_count++;
	}
	while (number != 0)
	{
		number = number / 10;
		len_count++;
	}
	return (len_count);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	length;
	long	nb;

	length = ft_length(n);
	nb = n;
	str = malloc(sizeof(char) * length + 1);
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
	{
		str[0] = '0';
	}
	str[length] = '\0';
	length--;
	while (nb)
	{
		str[length] = nb % 10 + '0';
		length--;
		nb = nb / 10;
	}
	return (str);
}
