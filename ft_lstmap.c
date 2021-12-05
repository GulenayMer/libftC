/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 15:36:19 by mgulenay          #+#    #+#             */
/*   Updated: 2021/12/05 16:01:24 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*head;

	if (!lst)
		return (NULL);
	new_list = ft_lstnew(f(lst->content));
	if (!new_list)
		return (NULL);
	head = new_list;
	while (lst->next)
	{
		lst = lst->next;
		new_list = ft_lstnew(f(lst->content));
		if (!new_list)
			ft_lstclear(&head, del);
		ft_lstadd_back(&head, new_list);
		new_list = new_list->next;
	}
	return (head);
}
