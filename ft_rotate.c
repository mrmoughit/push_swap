/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 17:50:41 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/08 03:29:37 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rr(t_list **stack_a, t_list **stack_b)
{
	write(1, "rr\n", 3);
	ft_rotate(stack_a, 2);
	ft_rotate(stack_b, 2);
}

void	ft_rotate(t_list **head, int flag)
{
	t_list	*last;
	t_list	*tmp;

	if (flag == 1)
		write(1, "ra\n", 3);
	else if (flag == 0)
		write(1, "rb\n", 3);
	tmp = (*head)->next;
	last = ft_last(*head);
	last->next = *head;
	(*head)->next = NULL;
	*head = tmp;
}
