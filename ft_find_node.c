/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 10:39:17 by abechcha          #+#    #+#             */
/*   Updated: 2023/12/31 10:39:19 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
t_list *ft_find_node(t_list *head,int a)
{
    t_list *tmp;
    tmp = head;
    int i;
    i = 1;
    while(i < a)
    {
        tmp = tmp->next;
        i++;
    }
    return(tmp);
}