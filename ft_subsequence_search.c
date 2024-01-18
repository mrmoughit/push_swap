/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_subsequence_search.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 10:57:37 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/09 17:59:27 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_subsequence_search(t_list **stack_a, int **ar)
{
	int	i;
	int	j;
	int	s;

	i = 0;
	s = ft_lstsize(*stack_a);
	while (i++ < s)
		ar[0][i] = 1;
	i = 1;
	while (s > 1)
	{
		j = 0;
		while (j < i)
		{
			if ((ft_find_node(*stack_a, i
						+ 1)->content) > (ft_find_node(*stack_a, j
						+ 1)->content) && ar[0][j] + 1 > ar[0][i])
			{
				ar[0][i] = ar[0][j] + 1;
			}
			j++;
		}
		i++;
		s--;
	}
	ft_setflag(stack_a, ar, ft_lstsize(*stack_a));
}
