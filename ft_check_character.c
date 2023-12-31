/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_character.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:02:32 by abechcha          #+#    #+#             */
/*   Updated: 2023/12/27 16:29:44 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_character(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] <= '9' && str[i] >= '0'))
		{
			if (i == 0 && (str[i] == '-' || str[i] == '+'))
				i++;
			else
				return (0);
		}
		if (str[i] > '9' || str[i] < '0')
			return (0);
		i++;
	}
	return (1);
}
