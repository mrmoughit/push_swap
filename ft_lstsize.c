/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 17:03:53 by abechcha          #+#    #+#             */
/*   Updated: 2023/12/30 17:03:56 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_lstsize(t_list *stack)
{
    int i = 0;
    t_list *tmp;
    tmp = stack;
    while(tmp)
    {
        tmp = tmp->next;
        i++;
    }
    return (i);
}