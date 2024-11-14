/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenkrar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:34:26 by abenkrar          #+#    #+#             */
/*   Updated: 2024/10/25 16:08:35 by abenkrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	length;
	char	*p_malloc;
	char	*p_memcpy;

	length = ft_strlen(s);
	p_malloc = malloc(sizeof(char) * (length + 1));
	if (p_malloc == NULL)
		return (NULL);
	p_memcpy = ft_memcpy(p_malloc, s, length + 1);
	return (p_memcpy);
}
