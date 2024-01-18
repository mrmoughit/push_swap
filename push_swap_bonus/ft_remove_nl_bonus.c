/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_nl.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:32:57 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/12 09:56:39 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

char	*ft_remove_nl(char *s)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc(ft_strlen(s));
	if (!str)
		return (NULL);
	while (s[i] && s[i] != '\n')
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	free(s);
	return (str);
}

int	ft_is_valid1(char *content)
{
	if (ft_strlen(content) - 1 < 2)
		return (0);
	if (ft_strncmp(content, "rra", ft_strlen(content) - 1) == 0)
		return (1);
	else if (ft_strncmp(content, "rrb", ft_strlen(content) - 1) == 0)
		return (1);
	else if (ft_strncmp(content, "rrr", ft_strlen(content) - 1) == 0)
		return (1);
	else if (ft_strncmp(content, "sa", ft_strlen(content) - 1) == 0)
		return (1);
	else
		return (0);
}

int	ft_is_valid(char *content)
{
	if (ft_strlen(content) - 1 < 2)
		return (0);
	if (ft_strncmp(content, "sb", ft_strlen(content) - 1) == 0)
		return (1);
	else if (ft_strncmp(content, "ss", ft_strlen(content) - 1) == 0)
		return (1);
	else if (ft_strncmp(content, "ra", ft_strlen(content) - 1) == 0)
		return (1);
	else if (ft_strncmp(content, "rb", ft_strlen(content) - 1) == 0)
		return (1);
	else if (ft_strncmp(content, "rr", ft_strlen(content) - 1) == 0)
		return (1);
	else if (ft_strncmp(content, "pa", ft_strlen(content) - 1) == 0)
		return (1);
	else if (ft_strncmp(content, "pb", ft_strlen(content) - 1) == 0)
		return (1);
	else
		return (0);
}
