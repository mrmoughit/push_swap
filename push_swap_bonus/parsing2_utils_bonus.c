/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing2_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 09:40:38 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/09 09:41:00 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

long	ft_atoi(char *str)
{
	int		i;
	int		sing;
	long	nb;
	long	r;

	i = 0;
	sing = 1;
	nb = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sing *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = nb;
		nb = nb * 10 + str[i] - 48;
		if (r != nb / 10)
			ft_error();
		i++;
	}
	return (nb * sing);
}

int	ft_check_empty(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] != ' ')
			return (1);
		i++;
	}
	return (0);
}

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

char	*ft_strjoin(char *ar, char *str)
{
	int		i;
	char	*r;
	int		j;

	i = 0;
	j = 0;
	if (!ar && !str)
		return (NULL);
	if (!ar)
		return (ft_strdup(str));
	if (!str)
		return (ft_strdup(ar));
	r = malloc(ft_strlen(ar) + ft_strlen(str) + 2);
	if (!r)
		return (free(ar), NULL);
	while (ar[i])
	{
		r[i] = ar[i];
		i++;
	}
	r[i++] = ' ';
	while (str[j])
		r[i++] = str[j++];
	r[i] = '\0';
	return (free(ar), r);
}

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
