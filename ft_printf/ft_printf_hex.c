/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 10:16:11 by msarigul          #+#    #+#             */
/*   Updated: 2022/08/02 10:16:16 by msarigul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static int	ft_hex_len(unsigned	int number)
{
	int	count;

	count = 0;
	if (number == 0)
		return (1);
	while (number != 0)
	{
		number /= 16;
		count++;
	}
	return (count);
}

int	ft_print_hex(unsigned int number, const char format)
{
	if (number == 0)
	{
		ft_putstr_fd("0", 1);
		return (1);
	}
	if (number >= 16)
	{
		ft_print_hex(number / 16, format);
		ft_print_hex(number % 16, format);
	}
	else
	{
		if (number <= 9)
			ft_putchar_fd('0' + number, 1);
		else
		{
			if (format == 'x')
				ft_putchar_fd((number - 10 + 'a'), 1);
			else if (format == 'X')
				ft_putchar_fd((number - 10 + 'A'), 1);
		}
	}
	return (ft_hex_len(number));
}
