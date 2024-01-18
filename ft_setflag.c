/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setflag.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 02:29:30 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/08 02:29:33 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_next_longest(int **ar, int i, int len)
{
	while (len > 0)
	{
		if (ar[0][len] == i)
			return (len);
		len--;
	}
	return (-1);
}

void	ft_setflag(t_list **stack_a, int **ar, int len)
{
	int	i;
	int	s;

	i = 0;
	s = 0;
	while (i < len)
	{
		if (s < ar[0][i])
			s = ar[0][i];
		i++;
	}
	while (1)
	{
		if (i == -1)
			break ;
		i = ft_next_longest(ar, s, len);
		ft_find_node(*stack_a, i + 1)->flag = 1;
		if (s == 0)
			break;
		s -= 1;
		len -= len - i;
	}
}
