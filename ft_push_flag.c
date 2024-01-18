/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_flag.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 11:57:53 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/13 08:43:21 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	helper(t_list **stack_a, t_list **stack_b)
{
	while ((*stack_a)->flag != 0)
		ft_rrotate(stack_a, 1);
	ft_push(stack_a, stack_b, 0);
}

void	ft_push_flag(t_list **stack_a, t_list **stack_b)
{
	int	size;
	int	i;

	size = ft_lstsize(*stack_a);
	while (1)
	{
		i = ft_find_node_flag(stack_a);
		if (i == 0)
			break ;
		if (i > (size / 2))
			helper(stack_a, stack_b);
		else
		{
			if (i != 1)
			{
				while ((*stack_a)->flag != 0)
					ft_rotate(stack_a, 1);
			}
			ft_push(stack_a, stack_b, 0);
		}
	}
}
