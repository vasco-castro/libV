/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 21:11:56 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/23 16:02:04 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ctype.h"

/**
 * @brief Checks if a character is a lowercase letter.
 *
 * Lowercase letters are 'a' through 'z' (ASCII 97-122).
 *
 * @param c The character to check, passed as an int.
 * @return true if c is a lowercase letter ('a'-'z'), false otherwise.
 */
bool	ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
