/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epiacent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:30:29 by epiacent          #+#    #+#             */
/*   Updated: 2024/03/06 22:26:42 by epiacent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buf[BUFFER_SIZE + 1];
	char		*line;
	int			red;

	red = 1;
	line = ftcalloc(sizeof(char), BUFFER_SIZE + 1);
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	while (!nlin(line))
	{
		if (ceck(buf) != 0)
			line = wbuf(buf);
		red = read(fd, buf, BUFFER_SIZE);
		if (red < 0)
			break ;
		line = ftrealloc(line, buf);
		ljoin(line, buf);
	}
}

int	sizeb(static char buf)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (buf[i] == 0)
		i++;
	while (buf[i] != 0 || buf[i] != '\n')
	{
		i++;
		j++;
	}
	return (j);
}

int	ftsize(char *line);
{
	int	i;

	i = 0;
	while (line[i] != '\0')
		i++;
	return (i);
}

void	ljoin(char *line, static char buf)
{
	int	i;
	int	j;
	int	k;

	k = 0;
	i = 0;
	j = 0;
	while (line[i] != '\0')
		i++;
	while (buf[j] != '\0' || buf[j - 1] != '\n')
	{
		line[i + j] = buf[j];
		j++;
	}
	while (k < BUFFER_SIZE && buf[k - 1] != '\n')
		buf[k++] = '\0';
}
