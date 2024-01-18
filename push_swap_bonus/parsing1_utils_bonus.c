/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing1_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 09:38:25 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/09 09:52:18 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

static int	word_size(const char *s, char c)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (s[i])
	{
		if (s[i] != c)
			size++;
		while (s[i] != c && s[i])
			i++;
		if (s[i])
			i++;
	}
	return (size);
}

static int	word_len(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != c && str[i] != '\0')
		i++;
	return (i);
}

static char	*ft_write(const char *s, char *p, int len)
{
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	p = (char *)malloc(len + 1);
	if (!p)
		return (NULL);
	while (i < len)
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

char	**free_tab(char **p, int index, int n)
{
	int	i;

	i = 0;
	if (n == 0)
	{
		while (i < index)
		{
			free(p[i]);
			i++;
		}
		free(p);
		return (NULL);
	}
	else
		p[index] = NULL;
	return (p);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		index;
	char	**p;

	i = 0;
	index = 0;
	if (s == NULL)
		return (NULL);
	p = (char **)malloc((j = word_size(s, c) + 1) * sizeof(char *));
	if (!p)
		return (NULL);
	while (s[i])
	{
		if (s[i] && s[i] != c)
		{
			p[index] = ft_write(&s[i], p[index], word_len(&s[i], c));
			if (!p[index])
				return (free_tab(p, index, 0));
			i += word_len(&s[i], c) - 1;
			index++;
		}
		i++;
	}
	return (free_tab(p, index, 1));
}
