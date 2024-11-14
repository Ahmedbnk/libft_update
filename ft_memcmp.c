/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenkrar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:03:58 by abenkrar          #+#    #+#             */
/*   Updated: 2024/11/09 17:11:15 by abenkrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p_str1;
	unsigned char	*p_str2;

	i = 0;
	p_str1 = (unsigned char *)(s1);
	p_str2 = (unsigned char *)(s2);
	while (i < n)
	{
		if (p_str1[i] != p_str2[i])
		{
			return (p_str1[i] - p_str2[i]);
		}
		i++;
	}
	return (0);
}
