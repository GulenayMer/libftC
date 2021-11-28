/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 20:08:56 by mgulenay          #+#    #+#             */
/*   Updated: 2021/11/28 17:25:51 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_length(char const *s_each, char c)
{
	size_t	i;
	size_t	length;
	
	i = 0;
	length = 0;
	while (s_each[i] != '\0')
	{
		if (s_each[i] == c)
		{
			length++;
		}
	i++;
	}
	return	(length);
}


char	**ft_split(char const *s, char c)
{
	char **new_str;
	size_t	i;
	size_t	j;
	size_t	count;

	i = 0;
	count = count_length(s, c);
	new_str = (char **)malloc(sizeof(char *) * (count + 1));
 	while (count > 0)
	{
		while(s[i] != '\0' && s[i] == c)
		i++;
		if(s[i] != '\0' && s[i] != c)
		{
			new_str[i];
		}
	}
	new_str[i] = '\0';
	return (new_str);
	return (0);
}

int main(void)
{
	char s[20] = "He,ll,o?";
	char delimiter = ",";
	char new_str[20];
    char *result;
	result = ft_strtrim(s, delimiter);
	printf("%s", result);
}