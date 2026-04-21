/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:52:46 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/23 16:08:12 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ctype.h"

/**
 * @brief Checks if a character is a blank character.
 *
 * Blank characters are space (ASCII 32) and horizontal tab (ASCII 9).
 *
 * @param c The character to check, passed as an int.
 * @return true if c is a space or horizontal tab, false otherwise.
 */
bool	ft_isblank(int c)
{
	return (c == '\t' || c == 32);
}
