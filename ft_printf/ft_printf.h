/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:11:12 by abechcha          #+#    #+#             */
/*   Updated: 2023/11/27 13:46:42 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putnbr(long nb);
int	ft_print_upp_hex(unsigned int n);
int	ft_print_low_hex(unsigned int n);
int	ft_print_adress(unsigned long long n);
int	ft_print_pointer(void *p);
int	ft_printf(const char *format, ...);
int	ft_putchar(int c);
int	ft_putstr(char *s);

#endif
