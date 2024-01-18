/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_best_move.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 13:51:35 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/08 02:21:09 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_to_stack_a(t_list **stack_b, t_list **stack_a, t_list *best)
{
	while (*stack_b != best || *stack_a != best->tar)
	{
		if (best->moves == 0 && best->tar->moves == 0)
			break ;
		if (best->moves < 1 && best->tar->moves < 1)
			ft_forward_to_rrr(stack_a, stack_b, best);
		else if (best->moves >= 1 && best->tar->moves >= 1)
			ft_forward_to_rr(stack_a, stack_b, best);
		else
			ft_forward_to_r_rr(stack_a, stack_b, best);
	}
}

void	ft_min_moves(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	t_list	*tmp1;
	int		i;

	tmp = *stack_b;
	i = 2147483647;
	while (tmp)
	{
		if (i > (tmp->moves + tmp->tar->moves))
		{
			i = (tmp->moves + tmp->tar->moves);
			tmp1 = tmp;
		}
		tmp = tmp->next;
	}
	if (ft_index(stack_b, tmp1->content) >= ft_lstsize(*stack_b) / 2)
		tmp1->moves = (tmp1->moves) * -1;
	if (ft_index(stack_a, tmp1->tar->content) >= ft_lstsize(*stack_a) / 2)
		tmp1->tar->moves = tmp1->tar->moves * -1;
	ft_push_to_stack_a(stack_b, stack_a, tmp1);
}

int	ft_index(t_list **stack, int a)
{
	t_list	*tmp;
	int		i;

	i = 0;
	tmp = *stack;
	while (tmp)
	{
		if (tmp->content == a)
			return (i);
		i++;
		tmp = tmp->next;
	}
	return (-1);
}

void	ft_check_best_move(t_list **stack_b, t_list **stack_a)
{
	t_list	*tmp;
	int		size;
	int		size1;
	int		index;
	int		index1;

	tmp = *stack_b;
	while (tmp)
	{
		size = ft_lstsize(*stack_a);
		size1 = ft_lstsize(*stack_b);
		index = ft_index(stack_a, tmp->tar->content);
		index1 = ft_index(stack_b, tmp->content);
		if (index < size / 2)
			tmp->tar->moves = index;
		else if (index >= size / 2)
			tmp->tar->moves = size - index;
		if (index1 < size1 / 2)
			tmp->moves = index1;
		else if (index1 >= size1 / 2)
			tmp->moves = size1 - index1;
		tmp = tmp->next;
	}
}
