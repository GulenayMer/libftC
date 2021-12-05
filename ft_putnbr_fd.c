/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 20:00:20 by mgulenay          #+#    #+#             */
/*   Updated: 2021/12/05 12:37:17 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	sign;
	
	sign = -1;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = (long)(n * sign);
	}
	else
	{
		n = (long)n;
	}
	
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd((char)(n % 10 + '0'), fd);
	}
	else
	{
		ft_putchar_fd((char)(n + '0'), fd);
	}	
}
