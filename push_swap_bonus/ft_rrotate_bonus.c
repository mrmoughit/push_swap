/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:57:57 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/12 09:57:34 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

void	ft_rrr(t_list **stack_a, t_list **stack_b)
{
	if (*stack_a)
		ft_rrotate(stack_a);
	if (*stack_b)
		ft_rrotate(stack_b);
}

void	ft_rrotate(t_list **head)
{
	t_list	*p;
	t_list	*tmp1;
	t_list	*tmp;
	int		index;

	if (!(*head) || ft_lstsize(*head) == 1)
		return ;
	p = *head;
	tmp = ft_last(p);
	index = ft_lstsize(p);
	tmp1 = ft_find_node(p, index - 1);
	tmp->next = p;
	tmp1->next = NULL;
	*head = tmp;
}
