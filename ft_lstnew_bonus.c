/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenkrar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 18:21:14 by abenkrar          #+#    #+#             */
/*   Updated: 2024/11/03 18:21:21 by abenkrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*my_node;

	my_node = malloc(sizeof(t_list));
	if (my_node == NULL)
		return (NULL);
	my_node->content = content;
	my_node->next = NULL;
	return (my_node);
}
