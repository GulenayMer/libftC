/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:13:57 by mgulenay          #+#    #+#             */
/*   Updated: 2021/11/21 12:58:29 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* to be used in the isalpha function*/

static int		ft_isupper(int c)
{
	return (c >= 'a' && c <= 'z');
}

static int		ft_islower(int c)
{
	return ((c >= 'A' &&  c <= 'Z'));
}

int    ft_isalpha(int c)
{	
	return (ft_isupper(c) || ft_islower(c));
}
