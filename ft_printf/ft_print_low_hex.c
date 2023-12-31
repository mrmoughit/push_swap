/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_low_hex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:38:11 by abechcha          #+#    #+#             */
/*   Updated: 2023/11/22 16:43:35 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_low_hex(unsigned int n)
{
	int		r;
	char	*base;

	r = 0;
	base = "0123456789abcdef";
	if (n >= 16)
	{
		r += ft_print_low_hex(n / 16);
		r += ft_print_low_hex(n % 16);
	}
	else
		r += ft_putchar(base[n]);
	return (r);
}
