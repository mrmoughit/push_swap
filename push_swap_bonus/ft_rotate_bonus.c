/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:56:18 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/13 14:49:36 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

void	ft_rr(t_list **stack_a, t_list **stack_b)
{
	if (*stack_a)
		ft_rotate(stack_a);
	if (*stack_b)
		ft_rotate(stack_b);
}

void	ft_rotate(t_list **head)
{
	t_list	*last;
	t_list	*tmp;

	if (ft_lstsize(*head) == 1 || !(*head))
		return ;
	tmp = (*head)->next;
	last = ft_last(*head);
	last->next = *head;
	(*head)->next = NULL;
	*head = tmp;
}
