/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 14:08:12 by abechcha          #+#    #+#             */
/*   Updated: 2023/12/30 14:21:53 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void vv(void)
// {
// 	system("leaks a.out");
// }
t_list	*parsing(int ac, char **av)
{
	int		i;
	char	*ar;
	char	**s;
	t_list	*stack_a;

	s = NULL;
	ar = NULL;
	if (ac < 2)
		ft_error();
	i = 1;
	while (i < ac)
	{
		if(ft_check_empty(av[i]) == 0)
			ft_error();
		ar = ft_strjoin(ar, av[i]);
		i++;
	}
	s = ft_split(ar, ' ');
	i = 0;
	while (s[i])
	{
		if (ft_check_character(s[i]) == 0 || (ft_is_int(s[i]) == 0)
			|| ft_check_duplicated(s) == 0)
			ft_error();
		i++;
	}
	return (free(ar), stack_a = ft_creat_list(s));
}
