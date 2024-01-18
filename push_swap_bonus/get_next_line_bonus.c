/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:13:36 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/16 19:46:03 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

static char	*ft_read_fd(int fd, char *rest)
{
	int		readed_bytes;
	char	*tmp;

	readed_bytes = 1;
	tmp = malloc((sizeof(char) * BUFFER_SIZE) + 1);
	if (!tmp)
		return (free(rest), NULL);
	while (1)
	{
		if (ft_find_nl(rest, '\n'))
			break ;
		readed_bytes = read(fd, tmp, BUFFER_SIZE);
		if (readed_bytes == -1)
			return (free(rest), free(tmp), NULL);
		tmp[readed_bytes] = 0;
		if (readed_bytes == 0)
			break ;
		rest = ft_strjoin_free(rest, tmp);
	}
	free(tmp);
	return (rest);
}

static char	*ft_line_extract(char *line, char *rest)
{
	int	i;
	int	j;

	j = 0;
	if (!rest || *rest == '\0')
		return (NULL);
	i = ft_find_nl(rest, '\n');
	if (!i)
		i = ft_strlen(rest);
	line = malloc(i + 1);
	if (!line)
		return (NULL);
	while (j < i)
	{
		line[j] = rest[j];
		j++;
	}
	line[j] = '\0';
	return (line);
}

static char	*ft_buckup(char *rest)
{
	int		i;
	int		j;
	char	*tmp;

	j = 0;
	i = 0;
	tmp = NULL;
	while (rest[i] != '\0' && rest[i] != '\n')
		i++;
	if (rest[i] == '\n')
		i++;
	if (rest[i] == '\0')
		return (free(rest), NULL);
	tmp = malloc((ft_strlen(&rest[i])) + 1);
	if (!tmp)
		return (NULL);
	while (rest[i])
		tmp[j++] = rest[i++];
	tmp[j] = '\0';
	if (rest)
		free(rest);
	return (tmp);
}

char	*get_next_line(int fd)
{
	static char	*rest;
	char		*line;

	line = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	rest = ft_read_fd(fd, rest);
	if (rest == NULL)
		return (NULL);
	line = ft_line_extract(line, rest);
	rest = ft_buckup(rest);
	return (line);
}
