/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 18:32:34 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/08 02:23:29 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstminnode(t_list *head)
{
	int		i;
	int		s;
	t_list	*tmp;

	i = 1;
	tmp = head;
	s = tmp->content;
	tmp = tmp->next;
	while (tmp)
	{
		if (s > tmp->content)
			s = tmp->content;
		tmp = tmp->next;
	}
	tmp = head;
	while (tmp)
	{
		if (s == tmp->content)
			break ;
		tmp = tmp->next;
		i++;
	}
	return (i);
}
