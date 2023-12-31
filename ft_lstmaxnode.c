/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fi_lstcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 09:51:46 by abechcha          #+#    #+#             */
/*   Updated: 2023/12/31 09:51:49 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstmaxnode(t_list *head)
{
    int s;
    s = 0;
    int i = 1;
    t_list *tmp;
    tmp = head;
    s = tmp->content;
    tmp = tmp->next;
    while(tmp)
    {
        if (s < tmp->content)
            s = tmp->content;
        tmp = tmp->next;
    }
    tmp =  head;
    while(tmp)
    {
        if (tmp->content == s)
            break;
        tmp = tmp->next;
        i++;
    }
    return(i);
}
