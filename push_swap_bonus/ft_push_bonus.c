/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 19:16:33 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/11 22:17:14 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

void	ft_push(t_list **src, t_list **dest)
{
	t_list	*new;

	if ((!*src))
		return ;
	new = (*src);
	(*src) = (*src)->next;
	ft_lstadd_front(dest, new);
}
