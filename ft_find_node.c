/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 18:29:31 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/08 02:21:54 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_find_node(t_list *head, int a)
{
	t_list	*tmp;
	int		i;

	tmp = head;
	i = 1;
	while (i < a)
	{
		// if (tmp->next)
			tmp = tmp->next;
		i++;
	}
	return (tmp);
}
