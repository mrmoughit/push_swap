/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_node_flag.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 12:05:03 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/08 02:21:43 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_node_flag(t_list **head)
{
	t_list	*tmp;
	int		i;

	tmp = *head;
	i = 1;
	while (tmp->next)
	{
		if (tmp->flag == 0)
			return (i);
		i++;
		tmp = tmp->next;
	}
	return (0);
}
