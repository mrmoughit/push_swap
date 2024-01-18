/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmax.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 17:25:05 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/08 02:23:05 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstmaxnode(t_list *head)
{
	int		s;
	int		i;
	t_list	*tmp;

	s = 0;
	i = 1;
	tmp = head;
	s = tmp->content;
	tmp = tmp->next;
	while (tmp)
	{
		if (s < tmp->content)
			s = tmp->content;
		tmp = tmp->next;
	}
	tmp = head;
	while (tmp)
	{
		if (tmp->content == s)
			break ;
		tmp = tmp->next;
		i++;
	}
	return (i);
}
