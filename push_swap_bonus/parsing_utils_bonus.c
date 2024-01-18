/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 09:37:17 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/09 09:37:40 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

int	ft_is_int(char *str)
{
	long	i;

	i = ft_atoi(str);
	if (i >= -2147483648 && i <= 2147483647)
		return (1);
	return (0);
}

int	ft_check_duplicated(char **s)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		j = i + 1;
		while (s[j])
		{
			if (ft_atoi(s[i]) == ft_atoi(s[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

t_list	*ft_creat_list(char **s)
{
	int		i;
	t_list	*head;
	t_list	*new_node;
	t_list	*last;

	i = 0;
	head = NULL;
	new_node = NULL;
	last = NULL;
	while (s[i])
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
	return (head);
}

char	*ft_strdup(char *s1)
{
	char	*str;
	int		i;

	i = 0;
	if (!s1)
		return (NULL);
	str = (char *)malloc(ft_strlen(s1) + 1);
	if (!str)
		return (0);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}
