/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 20:13:19 by mgulenay          #+#    #+#             */
/*   Updated: 2021/11/27 22:57:16 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_reverse(char *s)
{
	int i;
	int j;
	char temp;

	i = 0;
	j = ft_strlen(s) - 1;
	while(i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;		
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t i;
	
	str = (char *)malloc(sizeof(str));
	
	if(n == 0)
		str[0] = '0';
	i = 0;
	while (n != 0)
	{
		str[i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	if (n < 0)
	{
		str[0] = '-';
	}
	str[i] = '\0';
	ft_reverse(str);
	return (str);
}


int main(void)
{
	int a = -9876;
	int b = 9876;
	char *result1 = ft_itoa(a);
	printf("%s\n", result1);

	char *result2 = ft_itoa(b);
	printf("%s\n", result2);
	return(0);
}