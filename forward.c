/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   forward.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 11:43:06 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/08 03:11:05 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_forward_to_rrr(t_list **stack_a, t_list **stack_b, t_list *best)
{
	while (best->moves != 0 || best->tar->moves != 0)
	{
		if (best->moves != 0 && best->tar->moves != 0)
		{
			ft_rrr(stack_b, stack_a);
			best->moves = best->moves + 1;
			best->tar->moves = best->tar->moves + 1;
		}
		else if (best->moves != 0 && best->tar->moves == 0)
		{
			ft_rrotate(stack_b, 0);
			best->moves = best->moves + 1;
		}
		else if (best->moves == 0 && best->tar->moves != 0)
		{
			ft_rrotate(stack_a, 1);
			best->tar->moves = best->tar->moves + 1;
		}
	}
}

void	ft_forward_to_rr(t_list **stack_a, t_list **stack_b, t_list *best)
{
	while (best->moves != 0 || best->tar->moves != 0)
	{
		if (best->moves != 0 && best->tar->moves != 0)
		{
			ft_rr(stack_b, stack_a);
			best->moves = best->moves - 1;
			best->tar->moves = best->tar->moves - 1;
		}
		else if (best->moves != 0 && best->tar->moves == 0)
		{
			ft_rotate(stack_b, 0);
			best->moves = best->moves - 1;
		}
		else if (best->moves == 0 && best->tar->moves != 0)
		{
			ft_rotate(stack_a, 1);
			best->tar->moves = best->tar->moves - 1;
		}
	}
}

void	ft_forward_to_r_rr(t_list **stack_a, t_list **stack_b, t_list *best)
{
	while (best->moves != 0 || best->tar->moves != 0)
	{
		if (best->moves > 0)
		{
			ft_rotate(stack_b, 0);
			best->moves = best->moves - 1;
		}
		else if (best->moves < 0)
		{
			ft_rrotate(stack_b, 0);
			best->moves = best->moves + 1;
		}
		if (best->tar->moves > 0)
		{
			ft_rotate(stack_a, 1);
			best->tar->moves = best->tar->moves - 1;
		}
		else if (best->tar->moves < 0)
		{
			ft_rrotate(stack_a, 1);
			best->tar->moves = best->tar->moves + 1;
		}
	}
}
