/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 21:11:27 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/23 16:06:22 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ctype.h"

/**
 * @brief Checks if a character is an uppercase letter.
 *
 * Uppercase letters are 'A' through 'Z' (ASCII 65-90).
 *
 * @param c The character to check, passed as an int.
 * @return true if c is an uppercase letter ('A'-'Z'), false otherwise.
 */
bool	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
