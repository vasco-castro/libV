/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:53:55 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/23 16:02:42 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ctype.h"

/**
 * @brief Checks if a character is a decimal digit.
 *
 * Digit characters are '0' through '9' (ASCII 48-57).
 *
 * @param c The character to check, passed as an int.
 * @return true if c is a digit character ('0'-'9'), false otherwise.
 */
bool	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
