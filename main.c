/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 16:47:08 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/13 19:06:19 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_b = NULL;
	parsing(&stack_a, ac, av);
	if (ft_lstsize(stack_a) <= 3)
		ft_sort3(&stack_a);
	else if (ft_is_sorted(&stack_a) == 0 && (ft_lstsize(stack_a) == 4
			|| ft_lstsize(stack_a) == 5))
		ft_sort4(&stack_a, &stack_b);
	else if (ft_lstsize(stack_a) > 5)
		ft_big_sort(&stack_a, &stack_b);
	ft_free_linked_list(&stack_a);
	ft_free_linked_list(&stack_b);
}
