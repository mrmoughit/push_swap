/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 10:08:20 by abechcha          #+#    #+#             */
/*   Updated: 2023/12/29 10:09:01 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(int content)
{
    t_list *p = malloc(sizeof(t_list));
    if (!p)
        return NULL;
    p->content = content;
    p->next = NULL;
    p->flag = 0;
    return(p);
}
