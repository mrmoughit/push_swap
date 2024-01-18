/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:24:40 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/12 19:13:04 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

t_list	*ft_last(t_list *head)
{
	t_list	*tmp;

	tmp = head;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}

int	ft_lstsize(t_list *stack)
{
	int		i;
	t_list	*tmp;

	i = 0;
	if (!stack)
		return (0);
	tmp = stack;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

t_list	*ft_find_node(t_list *head, int a)
{
	t_list	*tmp;
	int		i;

	tmp = head;
	i = 1;
	while (i < a)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}

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

void	ft_printf_result(t_list **stack_a, t_list **stack_b, t_store **store)
{
	(void)store;
	if ((ft_is_sorted(stack_a) && ft_lstsize(*stack_b) == 0))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}
