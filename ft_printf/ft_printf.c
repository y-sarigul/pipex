/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 10:15:30 by msarigul          #+#    #+#             */
/*   Updated: 2022/08/02 10:15:33 by msarigul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include "ft_printf.h"
#include <stdarg.h>

static int	ft_format(va_list args, const char *format_str)
{
	int	written;

	written = 0;
	if (*format_str == 'c')
		written += ft_print_char(va_arg(args, int));
	else if (*format_str == 's')
		written += ft_print_string(va_arg(args, char *));
	else if (*format_str == 'X' || *format_str == 'x')
		written += ft_print_hex(va_arg(args, unsigned long long), *format_str);
	else if (*format_str == '%')
		written += ft_print_percent();
	else if (*format_str == 'd' || *format_str == 'i')
		written += ft_print_number(va_arg(args, int));
	else if (*format_str == 'p')
		written += ft_print_ptr(va_arg(args, unsigned long long));
	else if (*format_str == 'u')
		written += ft_print_unsigned(va_arg(args, int));
	return (written);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		written;

	va_start(args, format);
	written = 0;
	while (*format)
	{
		if (*format == '%')
		{
			written += ft_format(args, (format + 1));
			format++;
		}
		else
			written += ft_print_char(*format);
		format++;
	}
	va_end(args);
	return (written);
}
