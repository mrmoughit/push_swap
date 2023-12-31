/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 08:45:00 by abechcha          #+#    #+#             */
/*   Updated: 2023/11/27 13:33:19 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check_format(char c, va_list p)
{
	int	r;

	r = 0;
	if (c == 'c')
		r = ft_putchar(va_arg(p, int));
	else if (c == 's')
		r = ft_putstr(va_arg(p, char *));
	else if (c == 'd' || c == 'i')
		r = ft_putnbr(va_arg(p, int));
	else if (c == 'u')
		r = ft_putnbr(va_arg(p, unsigned int));
	else if (c == 'p')
		r = ft_print_pointer(va_arg(p, void *));
	else if (c == 'x')
		r = ft_print_low_hex(va_arg(p, unsigned int));
	else if (c == 'X')
		r = ft_print_upp_hex(va_arg(p, unsigned int));
	else
		r = ft_putchar(c);
	return (r);
}

int	ft_printf(const char *format, ...)
{
	va_list	p;
	int		i;
	int		r;

	va_start(p, format);
	if (write(1, NULL, 0) == -1)
		return (-1);
	i = 0;
	r = 0;
	if (!format || *format == '\0')
		return (0);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (!format[i + 1])
				break ;
			r += ft_check_format(format[++i], p);
		}
		else
			r += write(1, &format[i], 1);
		i++;
	}
	va_end(p);
	return (r);
}
