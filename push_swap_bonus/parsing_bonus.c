/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 09:34:25 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/11 17:50:14 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

static void	helper17(char **s, char *str)
{
	if (ft_check_character(str) == 0 || (ft_is_int(str) == 0)
		|| ft_check_duplicated(s) == 0)
	{
		free (str);
		ft_error();
	}
}

void	parsing(t_list **stack_a, int ac, char **av)
{
	int		i;
	char	*ar;
	char	**s;

	ar = NULL;
	if (ac < 2)
		exit(1);
	i = 1;
	while (i < ac)
	{
		if (ft_check_empty(av[i]) == 0)
			ft_error();
		ar = ft_strjoin(ar, av[i]);
		i++;
	}
	s = ft_split(ar, ' ');
	i = 0;
	while (s[i])
	{
		helper17(s, s[i]);
		i++;
	}
	*stack_a = ft_creat_list(s);
	ft_free_string(s);
	free(ar);
}
