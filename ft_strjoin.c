/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenkrar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:46:31 by abenkrar          #+#    #+#             */
/*   Updated: 2024/11/03 23:19:32 by abenkrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*p_joined;

	if (s1 == NULL)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	p_joined = malloc(sizeof(char) *(s1_len + s2_len + 1));
	if (p_joined == NULL)
		return (NULL);
	ft_memcpy(p_joined, s1, s1_len);
	ft_memcpy((p_joined + s1_len), s2, s2_len);
	p_joined[s1_len + s2_len] = '\0';
	return (p_joined);
}
