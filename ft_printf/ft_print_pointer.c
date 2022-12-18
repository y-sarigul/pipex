/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 10:15:09 by msarigul          #+#    #+#             */
/*   Updated: 2022/08/02 10:15:17 by msarigul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static int	ft_pointer_len(unsigned	long number)
{
	int	count;

	count = 0;
	while (number != 0)
	{
		number /= 16;
		count++;
	}
	return (count);
}

static int	ft_print_pointer(unsigned long long number)
{
	if (number >= 16)
	{
		ft_print_pointer(number / 16);
		ft_print_pointer(number % 16);
	}
	else
	{
		if (number <= 9)
			ft_putchar_fd('0' + number, 1);
		else
			ft_putchar_fd((number - 10 + 'a'), 1);
	}
	return (ft_pointer_len(number));
}

int	ft_print_ptr(unsigned long long addr)
{
	int	written;

	written = 0;
	written += ft_print_string("0x");
	if (addr == 0)
		written += ft_print_char('0');
	else
		written += ft_print_pointer(addr);
	return (written);
}
