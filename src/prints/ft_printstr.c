/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 18:01:23 by vsoares-          #+#    #+#             */
/*   Updated: 2025/03/06 17:16:27 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/prints.h"
#include "../../include/string.h"

/**
 * @brief Prints a string to stdout.
 *
 * Prints "(null)" if str is NULL.
 *
 * @param str The string to print.
 * @return The number of characters printed.
 */
int	ft_printstr(char *str)
{
	if (!str)
		return (ft_printstr("(null)"));
	return (write(1, str, ft_strlen(str)));
}

/**
 * @brief Prints a string to a file descriptor.
 *
 * Prints "(null)" if str is NULL.
 *
 * @param str The string to print.
 * @param fd The file descriptor to print to.
 * @return The number of characters printed.
 */
int	ft_printstr_fd(char *str, int fd)
{
	if (!str)
		return (ft_printstr_fd("(null)", fd));
	return (write(fd, str, ft_strlen(str)));
}

/**
 * @brief Prints a string followed by a newline to stdout.
 *
 * @param str The string to print.
 * @return The number of characters printed (including the newline).
 */
int	ft_println(char *str)
{
	return (ft_printstr(str)
		+ ft_printchar('\n'));
}

/**
 * @brief Prints a string followed by a newline to a file descriptor.
 *
 * @param str The string to print.
 * @param fd The file descriptor to print to.
 * @return The number of characters printed (including the newline).
 */
int	ft_println_fd(char *str, int fd)
{
	return (ft_printstr_fd(str, fd)
		+ ft_printchar_fd('\n', fd));
}
