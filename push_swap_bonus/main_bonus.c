/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 09:26:30 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/13 13:59:49 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	t_store	*store;
	char	*command;

	stack_b = NULL;
	parsing(&stack_a, ac, av);
	command = get_next_line(0);
	while (command)
	{
		if (ft_is_valid1(command) || ft_is_valid(command))
		{
			ft_add_back(&store, ft_remove_nl(command));
		}
		else
			ft_print_error(&stack_a, &stack_b, &store);
		command = get_next_line(0);
	}
	ft_applay(&store, &stack_a, &stack_b);
	ft_free_linked_list(&stack_a);
	ft_free_linked_list(&stack_b);
	ft_free_linked_list1(&store);
}
