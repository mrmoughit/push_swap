/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_Error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 22:10:45 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/13 12:54:26 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

void	ft_print_error(t_list **stack_a, t_list **stack_b, t_store **store)
{
	if (*stack_a)
		ft_free_linked_list(stack_a);
	if (*stack_b)
		ft_free_linked_list(stack_b);
	if (*store)
		ft_free_linked_list1(store);
	write(2, "Error\n", 6);
	exit(1);
}
