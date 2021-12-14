/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:15:30 by chaidel           #+#    #+#             */
/*   Updated: 2021/12/14 18:30:49 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_parsing(char c, args)
{
	size_t	value;

	value = 0;
	if (c == 'c')
		value += ft_putchar_fd(va_arg(args, char), 0);
	else if (c == 's')
		value += ft_putstr_fd(va_arg(args, char *), 0);
	else if (c == 'p')
	{

	}
	else if (c == 'd')
		value += ft_putnbr_fd(ft_itoa(va_arg(args, int)), 1);
	else if (c == 'i')
		value += ft_putnbr_fd(ft_itoa(va_arg(args, int)), 1);
	else if (c == 'u')
		value += ft_putnbr_fd(va_arg(args, unsigned int), 1);
	else if (c == 'x')
		value += ft_putnbr_fd(ft_itoa_hexa(va_arg(args, unsigned int), HEXA), 1);
	else if (c == 'X')
		value += ft_putnbr_fd(ft_itoa_hexa(va_arg(args, unsigned int), ft_strupcase(HEXA)), 1);
	else if (c == '%')
		value += ft_putchar_fd(c, 1);
	else
		value += ft_putchar_fd(c, 1);
	return (value);
}

int	ft_printf(const char *str, ...)
{
	size_t	value;
	size_t	i;

	va_start(args, str);
	value = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			value += ft_parsing(str[i], args);
			i += 2;
		}
		else
			value += ft_putchar_fd(str[i], 1);
	}
	va_end(args);
	return (value);
}
