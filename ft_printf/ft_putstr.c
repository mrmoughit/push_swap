/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:11:41 by abechcha          #+#    #+#             */
/*   Updated: 2023/11/21 17:24:04 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	r;
	int	i;

	r = 0;
	i = 0;
	if (!s)
		return (ft_putstr("(null)"));
	while (s[i])
	{
		r += ft_putchar(s[i]);
		i++;
	}
	return (r);
}
