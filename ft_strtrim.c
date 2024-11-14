/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenkrar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:10:16 by abenkrar          #+#    #+#             */
/*   Updated: 2024/11/02 21:57:21 by abenkrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	repetation(const char *set, const char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start_index;
	size_t	end_index;
	char	*p;

	if (s1 == NULL)
		return (NULL);
	start_index = 0;
	end_index = ft_strlen(s1);
	while (repetation(set, s1[start_index]) == 1)
	{
		start_index ++;
	}
	while (repetation(set, s1[end_index - 1]) == 1)
	{
		end_index --;
	}
	p = ft_substr(s1, start_index, (end_index - start_index));
	return (p);
}
