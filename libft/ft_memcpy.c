/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 04:29:01 by msarigul          #+#    #+#             */
/*   Updated: 2022/08/02 10:32:26 by msarigul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*destc;
	const char	*srcc;

	if ((dest == src) || n == 0)
		return (dest);
	if (!dest && !src)
		return (0);
	destc = (char *)dest;
	srcc = (const char *)src;
	while (n--)
		destc[n] = srcc[n];
	return (dest);
}
