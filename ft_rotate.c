/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 12:15:19 by abechcha          #+#    #+#             */
/*   Updated: 2023/12/31 12:15:21 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list      *ft_rotate(t_list *head)
{
    t_list *last;
    t_list *tmp;

    tmp = head->next;
    last = ft_last(head);
    last->next = head;
    head->next = NULL;
    return (tmp);

}