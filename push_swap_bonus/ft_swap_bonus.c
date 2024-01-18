/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:52:14 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/11 22:15:59 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

void	ft_ss(t_list **stack_a, t_list **stack_b)
{
	if (*stack_a)
		ft_lstswap(stack_a);
	if (*stack_b)
		ft_lstswap(stack_b);
}

void	ft_lstswap(t_list **head)
{
	t_list	*tmp;

	if (ft_lstsize(*head) == 1 || !(*head))
		return ;
	tmp = (*head)->next;
	(*head)->next = tmp->next;
	tmp->next = *head;
	*head = tmp;
}
