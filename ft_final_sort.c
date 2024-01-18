/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_final_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 01:02:27 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/08 03:12:12 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_final_sort(t_list **stack_a)
{
	int	a;

	a = ft_lstminnode(*stack_a);
	while (ft_index(stack_a, (*stack_a)->content) != ft_lstminnode(*stack_a)
		- 1)
	{
		if (a < ft_lstsize(*stack_a) / 2)
			ft_rotate(stack_a, 1);
		else
			ft_rrotate(stack_a, 1);
	}
}
