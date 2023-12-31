/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_last.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 12:45:17 by abechcha          #+#    #+#             */
/*   Updated: 2023/12/31 12:45:19 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list *ft_last(t_list *head)
{
    t_list *tmp;
    tmp = head;
    while(tmp->next)
        tmp = tmp->next;
    return(tmp);
}