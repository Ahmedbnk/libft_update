/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenkrar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:18:12 by abenkrar          #+#    #+#             */
/*   Updated: 2024/11/03 23:17:14 by abenkrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	s_length;

	if (s == NULL)
		return (NULL);
	s_length = ft_strlen(s);
	if (start >= s_length)
	{
		p = malloc(1);
		p[0] = '\0';
		return (p);
	}
	p = malloc(sizeof(char) * (len + 1));
	if (p == NULL)
		return (NULL);
	p = ft_memcpy(p, (s + start), len);
	p[len] = '\0';
	return (p);
}
