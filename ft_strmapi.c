/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenkrar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:30:02 by abenkrar          #+#    #+#             */
/*   Updated: 2024/10/28 16:34:33 by abenkrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned
int, char))
{
	unsigned int	index;
	size_t			length;
	char			*s_clone;

	if (s == NULL || f == NULL)
		return (NULL);
	index = 0;
	length = ft_strlen(s);
	s_clone = malloc(sizeof(char) * (length + 1));
	if (s_clone == NULL)
		return (NULL);
	while (index < length)
	{
		s_clone[index] = f(index, s[index]);
		index ++;
	}
	s_clone[index] = '\0';
	return (s_clone);
}
