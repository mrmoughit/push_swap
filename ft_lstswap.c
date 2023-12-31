/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 10:36:38 by abechcha          #+#    #+#             */
/*   Updated: 2023/12/31 10:36:43 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list    *ft_lstswap(t_list *head)
{
    t_list *tmp = head->next;
    head->next = tmp->next;
    tmp->next = head;
    return(tmp);

}