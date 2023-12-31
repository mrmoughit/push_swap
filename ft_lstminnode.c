/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstminnode.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 10:22:29 by abechcha          #+#    #+#             */
/*   Updated: 2023/12/31 10:22:33 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int     ft_lstminnode(t_list *head)
{
    int i;
    i = 1;
    int s;
    t_list *tmp;
    tmp = head;
    s = tmp->content;
    tmp = tmp->next;
    while(tmp)
    {
        if (s > tmp->content)
            s = tmp->content;
        tmp = tmp->next;
    }
    tmp = head;
    while(tmp)
    {
        if(s == tmp->content)
          break;
        tmp = tmp->next;
        i++;
    }
    return (i);
}