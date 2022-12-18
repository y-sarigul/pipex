/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 04:35:06 by msarigul          #+#    #+#             */
/*   Updated: 2022/08/02 10:34:56 by msarigul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	str_in_array(const char *s, char delimiter)
{
	unsigned int	qnt;

	qnt = 0;
	while (*s)
	{
		if (*s == delimiter)
			s++;
		else
		{
			while (*s != delimiter && *s)
				s++;
			qnt++;
		}
	}
	return (qnt);
}

char	**ft_split(char const *s, char c)
{
	char			**arr;
	unsigned int	j;
	unsigned int	a;

	if (!s)
		return (NULL);
	arr = (char **) ft_calloc(str_in_array(s, c) + 1, sizeof(char *));
	if (!arr)
		return (NULL);
	a = -1;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			j = 0;
			while (*s != c && *s && ++j)
				s++;
			arr[++a] = (char *) ft_calloc(j + 1, sizeof(char));
			ft_strlcpy(arr[a], s - j, j + 1);
		}
	}
	return (arr);
}
