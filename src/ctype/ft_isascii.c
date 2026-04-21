/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:01:56 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/23 17:50:53 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ctype.h"

/**
 * @brief Checks if a character is a valid ASCII character.
 *
 * Covers all ASCII characters (printable and non-printable).
 * Equivalent to: ft_iscntrl(c) || ft_isprint(c).
 *
 * @param c The character to check, passed as an int.
 * @return true if c is between 0 and 127 (inclusive), false otherwise.
 */
bool	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
