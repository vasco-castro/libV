/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:13:48 by vsoares-          #+#    #+#             */
/*   Updated: 2025/03/03 16:57:16 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/files.h"

/**
 * line_len - Calculates the length of a line up to a newline character.
 * @str: The string to measure.
 *
 * Returns the length of the line or 0 if the string is NULL.
 */
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

/**
 * bufshift - Shifts the buffer content after processing a line.
 * @buf: The buffer to shift.
 * @size: The number of characters to shift.
 *
 * Moves the remaining content in the buffer to the start and zeroes the rest.
 */
static void	bufshift(char *buf, size_t size)
{
	int	i;

	i = 0;
	while (buf[size] && size < BUFFER_SIZE)
		buf[i++] = buf[size++];
	while (i < BUFFER_SIZE)
		buf[i++] = 0;
}

/**
 * line_append - Appends buffer content to the current line.
 * @old_line: The existing line to append to.
 * @buf: The buffer containing new content.
 *
 * Returns a new line with the buffer content appended. Frees old_line.
 */
static char	*line_append(char *old_line, char *buf)
{
	char	*new_line;
	int		i;
	int		j;

	i = 0;
	new_line = malloc(line_len(old_line) + line_len(buf) + 2);
	if (!new_line)
		return (NULL);
	while (old_line && old_line[i])
	{
		new_line[i] = old_line[i];
		i++;
	}
	j = 0;
	while (buf[j] && (j == 0 || buf[j - 1] != '\n'))
		new_line[i++] = buf[j++];
	new_line[i] = 0;
	bufshift(buf, j);
	return (free(old_line), new_line);
}

/**
 * get_next_line - Reads the next line from a file descriptor.
 * @fd: The file descriptor to read from.
 *
 * Returns the next line from the file descriptor or NULL on error or EOF.
 */
char	*get_next_line(int fd)
{
	static char	buf[OPEN_MAX][BUFFER_SIZE + 1];
	char		*line;

	if (fd < 0 || fd >= OPEN_MAX || BUFFER_SIZE < 1)
		return (NULL);
	line = NULL;
	while (buf[fd][0] || read(fd, buf[fd], BUFFER_SIZE) > 0)
	{
		line = line_append(line, buf[fd]);
		if (!line)
			return (NULL);
		if (line[line_len(line)] == '\n')
			return (line);
	}
	return (line);
}
