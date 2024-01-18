/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_target.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 16:34:53 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/08 13:39:33 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_find_target(int a, t_list **stack_a)
{
	t_list	*p;
	t_list	*tar;

	tar = NULL;
	p = *stack_a;
	while (p)
	{
		if (p->content > a && (tar == NULL || tar->content > p->content))
			tar = p;
		p = p->next;
	}
	return (tar);
}

void	ft_set_target(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	tmp = *stack_b;
	while (tmp)
	{
		tmp->tar = ft_find_target(tmp->content, stack_a);
		if (tmp->tar == NULL)
			tmp->tar = ft_find_node(*stack_a, ft_lstminnode(*stack_a));
		tmp = tmp->next;
	}
}
