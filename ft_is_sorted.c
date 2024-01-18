/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 08:35:10 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/11 10:09:39 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_sorted(t_list **stack_a)
{
	t_list	*tmp;
	t_list	*tmp1;
	int		i;

	tmp = *stack_a;
	tmp1 = (*stack_a)->next;
	i = 1;
	while (tmp1)
	{
		if (tmp1->content < tmp->content)
			i = 0;
		tmp = tmp->next;
		tmp1 = tmp1->next;
	}
	return (i);
}
