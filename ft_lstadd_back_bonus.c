/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenkrar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 20:52:08 by abenkrar          #+#    #+#             */
/*   Updated: 2024/11/03 21:52:23 by abenkrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*position;

	position = *lst;
	if (position == NULL)
	{
		*lst = new;
		return ;
	}
	while (position != NULL)
	{
		if (position->next == NULL)
		{
			position->next = new;
			return ;
		}
		position = position->next;
	}
}
