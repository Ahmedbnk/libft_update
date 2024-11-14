/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenkrar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:29:02 by abenkrar          #+#    #+#             */
/*   Updated: 2024/11/14 10:08:19 by abenkrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *string, char c, size_t s_length)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (string[i] == c)
		i++;
	while (i < s_length)
	{
		if (string[i] != c
			&& (string[i + 1] == c || string[i +1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static size_t	ft_word_len(const char *str, char c)
{
	size_t	i;

	i = 0;
	if (c == '\0' && str[0] == '\0')
		return (0);
	if (c == '\0')
		return (ft_strlen(str));
	while (str[i] != c && str[i] != '\0')
	{
		i ++;
	}
	return (i);
}

static char	**ft_free(char **splited, size_t words_count)
{
	size_t	k;

	k = 0;
	while (k < words_count)
		free (splited[k++]);
	free (splited);
	return (NULL);
}

static char	**norminette(char **splited, const char *s,
		char c, size_t words_count)
{
	size_t	word_len;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < words_count)
	{
		word_len = 0;
		while (s[j] == c)
			j++;
		word_len = ft_word_len(s + j, c);
		splited[i] = malloc(word_len + 1);
		if (splited[i] == NULL)
		{
			return (ft_free(splited, words_count));
		}
		ft_strlcpy(splited[i], s + j, word_len + 1);
		j += word_len;
		i ++;
	}
	splited[i] = NULL;
	return (splited);
}

char	**ft_split(char const *s, char c)
{
	size_t	words_count;
	char	**splited;
	size_t	s_length;

	if (s == NULL)
		return (NULL);
	s_length = ft_strlen(s);
	words_count = count_words(s, c, s_length);
	splited = malloc(sizeof(char *) * (words_count + 1));
	if (splited == NULL)
		return (NULL);
	return (norminette(splited, s, c, words_count));
}
