/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:20:42 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/12 19:12:55 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

void	ft_free_linked_list(t_list **stack)
{
	t_list	*temp_head;
	t_list	*actual_node;

	if (!stack)
		return ;
	actual_node = (*stack);
	while (actual_node)
	{
		temp_head = actual_node->next;
		free(actual_node);
		actual_node = temp_head;
	}
	*stack = NULL;
}

void	ft_free_linked_list1(t_store **stack)
{
	t_store	*temp_head;
	t_store	*actual_node;

	actual_node = (*stack);
	while (actual_node)
	{
		temp_head = actual_node->next;
		free(actual_node->content);
		free(actual_node);
		actual_node = temp_head;
	}
	*stack = NULL;
}
