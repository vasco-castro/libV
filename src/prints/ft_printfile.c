/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfile.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 14:38:04 by vsoares-          #+#    #+#             */
/*   Updated: 2025/11/03 19:08:43 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/prints.h"

/**
 * @brief Prints the contents of a file to the standard output
 *
 * @param filepath Path to the file to print
 * @return Number of characters printed, or -1 on error
 */
int	ft_printfile(const char *filepath)
{
	int		fd;
	int		count;
	char	*line;

	if (!filepath)
		return (-1);
	fd = open(filepath, O_RDONLY);
	if (fd < 0)
		return (-1);
	count = 0;
	line = get_next_line(fd);
	while (line)
	{
		count += ft_println(line);
		free(line);
		line = get_next_line(fd);
	}
	close(fd);
	return (count);
}

/**
 * @brief Prints the contents of a file to a specified file descriptor
 *
 * @param filepath Path to the file to print
 * @param fd File descriptor to print to
 * @return Number of characters printed, or -1 on error
 */
int	ft_printfile_fd(const char *filepath, int output_fd)
{
	int		fd;
	int		count;
	char	*line;

	if (!filepath || output_fd < 0)
		return (-1);
	fd = open(filepath, O_RDONLY);
	if (fd < 0)
		return (-1);
	count = 0;
	line = get_next_line(fd);
	while (line)
	{
		count += ft_println_fd(line, output_fd);
		free(line);
		line = get_next_line(fd);
	}
	close(fd);
	return (count);
}
