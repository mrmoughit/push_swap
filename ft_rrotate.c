/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 18:08:06 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/08 03:29:11 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rrr(t_list **stack_a, t_list **stack_b)
{
	write(1, "rrr\n", 4);
	ft_rrotate(stack_a, 2);
	ft_rrotate(stack_b, 2);
}

void	ft_rrotate(t_list **head, int flag)
{
	t_list	*p;
	t_list	*tmp1;
	t_list	*tmp;
	int		index;

	if (flag == 1)
		write(1, "rra\n", 4);
	else if (flag == 0)
		write(1, "rrb\n", 4);
	p = *head;
	tmp = ft_last(p);
	index = ft_lstsize(p);
	tmp1 = ft_find_node(p, index - 1);
	tmp->next = p;
	tmp1->next = NULL;
	*head = tmp;
}
