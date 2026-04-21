/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:48:11 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/23 17:49:55 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ctype.h"

/**
 * @brief Checks if a character is printable.
 *
 * Printable characters include all graphical characters and the space character.
 * Equivalent to: ft_isgraph(c) || c == ' ' (ASCII 32-126).
 *
 * @param c The character to check, passed as an int.
 * @return true if c is a printable character (including space), false otherwise.
 */
bool	ft_isprint(int c)
{
	return (ft_isgraph(c) || (c == ' '));
	return (c >= 32 && c <= 126);
}
