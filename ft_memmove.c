/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenkrar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:27:51 by abenkrar          #+#    #+#             */
/*   Updated: 2024/11/09 15:05:48 by abenkrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*p_src;
	char	*p_dest;

	p_src = (char *)(src);
	i = 0;
	p_dest = (char *)(dest);
	if ((p_dest == p_src) || n == 0)
		return (p_dest);
	if (src < dest)
	{
		while (n-- > 0)
		{
			p_dest[n] = p_src[n];
		}
	}
	else
	{
		while (i < n)
		{
			p_dest[i] = p_src[i];
			i++;
		}
	}
	return ((void *)(p_dest));
}
