/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenkrar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 22:23:53 by abenkrar          #+#    #+#             */
/*   Updated: 2024/11/05 22:23:57 by abenkrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*position;
	t_list	*new_node;
	t_list	*new_list;

	new_list = NULL;
	if (lst == NULL || del == NULL)
		return (NULL);
	position = lst;
	while (position != NULL)
	{
		new_node = malloc(sizeof(t_list));
		if (new_node == NULL)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		new_node->content = f(position->content);
		new_node->next = NULL;
		ft_lstadd_back(&new_list, new_node);
		position = position->next;
	}
	return (new_list);
}
