/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:18:02 by abechcha          #+#    #+#             */
/*   Updated: 2023/12/28 08:28:32 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
