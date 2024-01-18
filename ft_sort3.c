/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 17:18:07 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/08 03:35:23 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort3(t_list **stack_a)
{
	if (ft_lstsize(*stack_a) == 2 || ft_lstsize(*stack_a) == 1)
	{
		if (ft_lstsize(*stack_a) == 2
			&& (*stack_a)->content > (*stack_a)->next->content)
			ft_lstswap(stack_a, 1);
		exit(0);
	}
	if (ft_lstmaxnode(*stack_a) == 1 && ft_lstminnode(*stack_a) == 2)
		ft_rotate(stack_a, 1);
	if (ft_lstmaxnode(*stack_a) == 1 && ft_lstminnode(*stack_a) == 3)
	{
		ft_lstswap(stack_a, 1);
		ft_rrotate(stack_a, 1);
	}
	if (ft_lstminnode(*stack_a) == 2)
		ft_lstswap(stack_a, 1);
	if (ft_lstminnode(*stack_a) == 3)
		ft_rrotate(stack_a, 1);
	if (ft_lstmaxnode(*stack_a) == 2 && ft_lstminnode(*stack_a) == 1)
	{
		ft_lstswap(stack_a, 1);
		ft_rotate(stack_a, 1);
	}
}
