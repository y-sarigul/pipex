/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 10:16:52 by msarigul          #+#    #+#             */
/*   Updated: 2022/08/02 10:16:54 by msarigul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_print_char(const int chr)
{
	write(1, &chr, 1);
	return (1);
}

int	ft_print_string(const char *str)
{
	int	printed;

	if (str == NULL)
		return (ft_print_string("(null)"));
	printed = 0;
	while (*str)
	{
		printed += ft_print_char(*str);
		str++;
	}
	return (printed);
}

int	ft_print_percent(void)
{
	return (ft_print_char('%'));
}
