/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 10:25:55 by msarigul          #+#    #+#             */
/*   Updated: 2022/08/02 10:25:57 by msarigul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

int	ft_printf(const char *format, ...);
int	ft_print_char(const int chr);
int	ft_print_string(const char *str);
int	ft_print_hex(unsigned int number, const char format);
int	ft_print_percent(void);
int	ft_print_number(int nbr);
int	ft_print_unsigned(unsigned int nbr);
int	ft_print_ptr(unsigned long long addr);

#endif
