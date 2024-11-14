/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenkrar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:11:04 by abenkrar          #+#    #+#             */
/*   Updated: 2024/10/31 18:30:53 by abenkrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	c_index;

	i = 0;
	c_index = -1;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			c_index = i;
		}
		i++;
	}
	if (c_index != -1)
	{
		return ((char *)(s + c_index));
	}
	if (c == '\0')
	{
		return ((char *)(s + i));
	}
	return (NULL);
}
