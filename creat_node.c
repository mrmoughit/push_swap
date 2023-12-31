/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_node.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:55:22 by abechcha          #+#    #+#             */
/*   Updated: 2023/12/28 17:55:25 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list    *ft_creat_list(char **s)
{
     int i= 0;
     t_list *head = NULL;
     t_list *new_node = NULL;
     t_list *last  = NULL;


   while(s[i])
   {
        new_node = ft_lstnew((int)ft_atoi(s[i]));
        if (head == NULL)
        {
          head = new_node;
          last = head;
        }
        else
        {
          last->next = new_node;
          last = new_node;
        }
        i++;
   }
   ft_rsplit_free(s);
   return(head);
}