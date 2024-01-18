/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_fun.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:25:10 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/12 09:56:56 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

t_store	*ft_lstnew1(char *content)
{
	t_store	*p;

	p = (t_store *)malloc(sizeof(t_store));
	if (!p)
		return (NULL);
	p->content = content;
	p->next = NULL;
	return (p);
}

void	ft_add_back(t_store **head, char *content)
{
	t_store	*tmp;

	tmp = *head;
	if (!head)
		return ;
	if (!(*head) || !head)
		*head = ft_lstnew1(ft_strdup(content));
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = ft_lstnew1(ft_strdup(content));
	}
	free(content);
}

void	ft_applay1(t_store **head, t_list **stack_a, t_list **stack_b)
{
	if (ft_strncmp((*head)->content, "ss", 2) == 0)
		ft_ss(stack_a, stack_b);
	else if (ft_strncmp((*head)->content, "ra", 2) == 0)
		ft_rotate(stack_a);
	else if (ft_strncmp((*head)->content, "rb", 2) == 0)
		ft_rotate(stack_b);
	else if (ft_strncmp((*head)->content, "rr", 2) == 0)
		ft_rr(stack_a, stack_b);
	else if (ft_strncmp((*head)->content, "pb", 2) == 0)
		ft_push(stack_a, stack_b);
	else if (ft_strncmp((*head)->content, "pa", 2) == 0)
		ft_push(stack_b, stack_a);
}

void	ft_applay(t_store **head, t_list **stack_a, t_list **stack_b)
{
	t_store	*tmp;

	tmp = *head;
	while (*head)
	{
		if (ft_strncmp((*head)->content, "sa", 2) == 0)
			ft_lstswap(stack_a);
		else if (ft_strncmp((*head)->content, "rra", 3) == 0)
			ft_rrotate(stack_a);
		else if (ft_strncmp((*head)->content, "rrb", 3) == 0)
			ft_rrotate(stack_b);
		else if (ft_strncmp((*head)->content, "rrr", 3) == 0)
			ft_rrr(stack_a, stack_b);
		else if (ft_strncmp((*head)->content, "sb", 2) == 0)
			ft_lstswap(stack_b);
		else
			ft_applay1(head, stack_a, stack_b);
		(*head) = (*head)->next;
	}
	*head = tmp;
	ft_printf_result(stack_a, stack_b, head);
}
