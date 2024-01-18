/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 09:03:41 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/08 17:36:18 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	helper1(t_list **stack_a, t_list *p)
{
	while ((*stack_a)->content != p->content)
		ft_rrotate(stack_a, 1);
}

void	ft_sort4(t_list **stack_a, t_list **stack_b)
{
	int		i;
	int		j;
	int		min_pos;
	t_list	*p;

	i = 1;
	if (ft_lstsize(*stack_a) == 5)
		i = 2;
	j = i;
	while (i-- > 0)
	{
		min_pos = ft_lstminnode(*stack_a);
		p = ft_find_node(*stack_a, min_pos);
		if (min_pos > 2)
			helper1(stack_a, p);
		else
			while ((*stack_a)->content != p->content)
				ft_rotate(stack_a, 1);
		ft_push(stack_a, stack_b, 0);
	}
	ft_sort3(stack_a);
	ft_push(stack_b, stack_a, 1);
	if (j == 2)
		ft_push(stack_b, stack_a, 1);
}
