/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 18:15:22 by abechcha          #+#    #+#             */
/*   Updated: 2023/12/30 18:15:24 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;

	stack_a = parsing(ac, av);
	 if (ft_lstsize(stack_a) == 3)
	 {
		if (ft_lstmaxnode(stack_a) == 3 && ft_lstminnode(stack_a) == 2)
			ft_printf("sa\n"), stack_a = ft_lstswap(stack_a);
		else if (ft_lstmaxnode(stack_a) == 2 && ft_lstminnode(stack_a) == 1)
		{
			ft_printf("rra\nsa\n");
			stack_a = ft_rrotate(stack_a);
			stack_a = ft_lstswap(stack_a);
		}
		else if (ft_lstmaxnode(stack_a) == 2 && ft_lstminnode(stack_a) == 3)
			ft_printf("rra\n"), stack_a = ft_rrotate(stack_a);
		else if (ft_lstmaxnode(stack_a) == 1 && ft_lstminnode(stack_a) == 3)
		{
			stack_a = ft_rotate(stack_a);
			stack_a = ft_lstswap(stack_a);
			 ft_printf("ra\nsa\n");
		}
		else if (ft_lstmaxnode(stack_a) == 1 && ft_lstminnode(stack_a) == 2)
		{
			stack_a = ft_rrotate(stack_a);
			stack_a = ft_rrotate(stack_a);
			 ft_printf("rra\nrra\n");
		}
	}
	ft_print_list(stack_a);
}
