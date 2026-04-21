/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iscntrl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:42:21 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/23 16:09:47 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ctype.h"

/**
 * @brief Checks if a character is a control character.
 *
 * Control characters are non-printable characters with ASCII values
 * 0-31 and 127 (DEL).
 *
 * @param c The character to check, passed as an int.
 * @return true if c is a control character, false otherwise.
 */
bool	ft_iscntrl(int c)
{
	return ((c >= 0 && c <= 31) || c == 127);
}
