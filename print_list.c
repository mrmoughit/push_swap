/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 10:20:51 by abechcha          #+#    #+#             */
/*   Updated: 2023/12/29 10:21:22 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_print_list(t_list *head)
{
    t_list *curent;
    if (!head)
        return ;
    curent = head;
    while(curent)
    {
        ft_printf("%d\n", curent->content);
        curent = curent->next;
    }

}
