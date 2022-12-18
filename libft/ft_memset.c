/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 04:29:42 by msarigul          #+#    #+#             */
/*   Updated: 2022/08/02 10:32:56 by msarigul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	char			*buc;

	i = 0;
	buc = (char *)s;
	while (i < n)
	{
		buc[i] = c;
		i++;
	}
	s = buc;
	return (s);
}
