/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 11:19:01 by abechcha          #+#    #+#             */
/*   Updated: 2023/12/31 11:19:04 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list   *ft_rrotate(t_list *head)
{
    t_list *p;
    t_list *tmp1;
    t_list *tmp;

    p = head;
    tmp = ft_last(p);
    int index = ft_lstsize(p);
    tmp1 = ft_find_node(p,index -1);
    tmp->next = p;
    tmp1->next =NULL;



    return (tmp);
}