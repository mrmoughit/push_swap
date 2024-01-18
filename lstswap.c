/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstswap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 17:32:43 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/13 08:43:41 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ss(t_list **stack_a, t_list **stack_b)
{
	write(1, "ss\n", 3);
	ft_lstswap(stack_a, 2);
	ft_lstswap(stack_b, 2);
}

void	ft_lstswap(t_list **head, int flag)
{
	t_list	*tmp;

	if (flag == 1)
		write(1, "sa\n", 3);
	else if (flag == 0)
		write(1, "sb\n", 3);
	tmp = (*head)->next;
	(*head)->next = tmp->next;
	tmp->next = *head;
	*head = tmp;
}
