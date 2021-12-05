/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 15:17:27 by mgulenay          #+#    #+#             */
/*   Updated: 2021/12/05 15:59:50 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (lst)
	{
		if (*lst == NULL)
			return ;
		else
		{
			while (*lst)
			{
				temp = *lst;
				del(temp->content);
				*lst = temp->next;
				free(temp);
			}
		}
	}
}
