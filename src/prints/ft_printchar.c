/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 17:59:07 by vsoares-          #+#    #+#             */
/*   Updated: 2025/03/06 17:16:21 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/prints.h"

/**
 * @brief Prints a single character to stdout.
 *
 * @param c The character to print, passed as an int.
 * @return The number of characters written (1 on success, -1 on error).
 */
int	ft_printchar(int c)
{
	return (write(1, &c, 1));
}

/**
 * @brief Prints a single character to a file descriptor.
 *
 * @param c The character to print.
 * @param fd The file descriptor to print to.
 * @return The number of characters written (1 on success, -1 on error).
 */
int	ft_printchar_fd(char c, int fd)
{
	return (write(fd, &c, 1));
}
