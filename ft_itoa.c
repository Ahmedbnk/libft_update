/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenkrar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:06:23 by abenkrar          #+#    #+#             */
/*   Updated: 2024/11/10 10:45:38 by abenkrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_length(int n)
{
	size_t	length;

	length = 0;
	if (n == -2147483648)
		return (11);
	if (n == 0)
		return (1);
	if (n < 0)
	{
		length ++;
		n = n * -1;
	}
	while (n >= 1)
	{
		length ++;
		n = n / 10;
	}
	return (length);
}

static char	*reverse_string(char *str, int sign)
{
	char	*str_clone;
	size_t	start;
	size_t	end;
	char	temp;

	str_clone = str;
	if (sign == -1)
		str ++;
	start = 0;
	end = ft_strlen((const char *)str) - 1;
	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start ++;
		end --;
	}
	return (str_clone);
}

static void	norminette_26line(char *string, int n, size_t n_length)
{
	size_t	i;
	int		sign;

	i = 0;
	sign = 1;
	if (n == -2147483648)
	{
		ft_strlcpy(string, "-2147483648", 12);
		return ;
	}
	if (n < 0)
	{
		string[i] = '-';
		n = n * -1;
		sign = -1;
		i ++;
	}
	while (i < n_length)
	{
		string[i] = (n % 10) + 48;
		n = n / 10;
		i++;
	}
	string[i] = '\0';
	string = reverse_string(string, sign);
}

char	*ft_itoa(int n)
{
	size_t	n_length;
	char	*string;

	n_length = count_length(n);
	string = malloc(n_length + 1);
	if (!string)
		return (NULL);
	norminette_26line(string, n, n_length);
	return (string);
}
