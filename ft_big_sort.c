/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 09:24:55 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/08 15:11:13 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_big_sort(t_list **stack_a, t_list **stack_b)
{
	int	*subsequence_arr;
	int	i;

	subsequence_arr = malloc((ft_lstsize(*stack_a) + 1) * sizeof(int));
	if (!subsequence_arr)
		return ;
	ft_subsequence_search(stack_a, &subsequence_arr);
	ft_push_flag(stack_a, stack_b);
	i = ft_lstsize(*stack_b);
	while (i > 0)
	{
		ft_set_target(stack_a, stack_b);
		ft_check_best_move(stack_b, stack_a);
		ft_min_moves(stack_a, stack_b);
		ft_push(stack_b, stack_a, 1);
		i--;
	}
	free(subsequence_arr);
	ft_final_sort(stack_a);
}
