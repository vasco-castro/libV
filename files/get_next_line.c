/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:13:48 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/23 16:50:53 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

static int	line_len(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] && str[i] != '\n')
		i++;
	return (i);
}

static void	bufshift(char *buf, size_t size)
{
	int	i;

	i = 0;
	while (buf[size])
		buf[i++] = buf[size++];
	while (i < BUFFER_SIZE)
		buf[i++] = 0;
}

static char	*line_append(char *old_line, char *buf)
{
	char	*new_line;
	int		i;
	int		j;

	i = 0;
	j = 0;
	new_line = malloc(line_len(old_line) + line_len(buf) + 2);
	if (!new_line)
		return (NULL);
	while (old_line && old_line[i])
	{
		new_line[i] = old_line[i];
		i++;
	}
	while (buf[j] && buf[j - 1] != '\n')
		new_line[i++] = buf[j++];
	new_line[i] = 0;
	bufshift(buf, j);
	free(old_line);
	return (new_line);
}

char	*get_next_line(int fd)
{
	static char	buf[FOPEN_MAX][BUFFER_SIZE + 1];
	char		*line;
	int			c_read;

	if (fd < 0 || fd >= FOPEN_MAX || BUFFER_SIZE < 1)
		return (NULL);
	line = NULL;
	if (buf[fd][0])
		c_read = 1;
	else
		c_read = read(fd, buf[fd], BUFFER_SIZE);
	while (c_read > 0)
	{
		line = line_append(line, buf[fd]);
		if (!line)
			return (NULL);
		if (line[line_len(line)] == '\n')
			return (line);
	}
	if (c_read < 0)
		return (free(line), NULL);
	return (line);
}
