/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:13:48 by vsoares-          #+#    #+#             */
/*   Updated: 2026/01/08 18:26:35 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/files.h"

/**
 * @brief Calculates the length of a line up to a newline character.
 *
 * @param str The string to measure.
 * @return The length of the line (not including the newline), or 0 if str is NULL.
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
 * @brief Shifts the buffer content after processing a line.
 *
 * Moves the remaining content in the buffer to the start and zeroes the rest.
 *
 * @param buf  The buffer to shift.
 * @param size The number of characters to skip (shift offset).
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
 * @brief Appends buffer content to the current line being built.
 *
 * Allocates a new string combining old_line and the buffer content up to
 * and including the first newline. Frees old_line after appending.
 *
 * @param old_line The existing line to append to (may be NULL).
 * @param buf      The buffer containing new content to append.
 * @return A newly allocated string with the appended content,
 *         or NULL if allocation fails.
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
 * @brief Reads the next line from a file descriptor.
 *
 * Reads from fd one line at a time, preserving the trailing newline character
 * if present. Maintains a per-fd static buffer between calls.
 *
 * @param fd The file descriptor to read from.
 * @return A pointer to the next line (including the newline if present),
 *         or NULL on error, invalid fd, or end of file with no data read.
 */
char	*get_next_line(int fd)
{
	static char	buf[FD_MAX][BUFFER_SIZE + 1];
	char		*line;

	if (fd < 0 || fd >= FD_MAX || BUFFER_SIZE < 1)
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
