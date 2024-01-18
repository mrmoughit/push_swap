/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 07:46:46 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/13 08:42:50 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_optimized(t_list **stack)
{
	int	average;

	average = ft_find_node(*stack, ft_lstminnode(*stack))->content;
	average += ft_find_node(*stack, ft_lstmaxnode(*stack))->content;
	if ((*stack)->content > average / 2)
		ft_rotate(stack, 0);
}

void	ft_push(t_list **src, t_list **dest, int flag)
{
	t_list	*new;

	new = (*src);
	(*src) = (*src)->next;
	ft_lstadd_front(dest, new);
	if (flag == 1)
		write(1, "pa\n", 3);
	else if (flag == 0)
	{
		write(1, "pb\n", 3);
		if (ft_lstsize(*src) > 5)
			ft_optimized(dest);
	}
}
