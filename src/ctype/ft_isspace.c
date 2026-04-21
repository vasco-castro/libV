/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:42:21 by vsoares-          #+#    #+#             */
/*   Updated: 2025/12/01 16:24:05 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ctype.h"

/**
 * @brief Checks if a character is a white-space character.
 *
 * White-space characters are:
 * - 9  HT  '\t' (horizontal tab)
 * - 10 LF  '\n' (new line)
 * - 11 VT  '\v' (vertical tab)
 * - 12 FF  '\f' (form feed)
 * - 13 CR  '\r' (carriage return)
 * - 32     ' '  (space)
 *
 * @param c The character to check, passed as an int.
 * @return true if c is a white-space character, false otherwise.
 */
bool	ft_isspace(int c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}
