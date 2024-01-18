/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 07:54:41 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/08 02:22:53 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_front(t_list **head, t_list *new)
{
	if (*head == NULL)
	{
		*head = new;
		(*head)->next = NULL;
	}
	else
	{
		new->next = *head;
		*head = new;
	}
}
