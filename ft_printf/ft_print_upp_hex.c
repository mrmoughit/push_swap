/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_upp_hex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:16:36 by abechcha          #+#    #+#             */
/*   Updated: 2023/11/24 15:26:55 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_upp_hex(unsigned int n)
{
	int		r;
	char	*base;

	r = 0;
	base = "0123456789ABCDEF";
	if (n >= 16)
	{
		r += ft_print_upp_hex(n / 16);
		r += ft_print_upp_hex(n % 16);
	}
	else
		r += ft_putchar(base[n]);
	return (r);
}
