/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 17:59:07 by vsoares-          #+#    #+#             */
/*   Updated: 2026/05/04 01:09:10 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * @brief Writes one character to standard output.
 *
 * @param c Character code to print.
 * @return Number of bytes written, or -1 on error.
 */
int	ft_printchar(int c)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	return (write(STDOUT_FILENO, &ch, 1));
}

/**
 * @brief Writes one character to a file descriptor.
 *
 * @param c  Character code to print.
 * @param fd Destination file descriptor.
 * @return Number of bytes written, or -1 on error.
 */
int	ft_printchar_fd(int c, int fd)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	return (write(fd, &ch, 1));
}
