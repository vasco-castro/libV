/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:57:29 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/23 16:33:56 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ctype.h"

/**
 * @brief Checks if a character is alphanumeric.
 *
 * Combination of ft_isalpha + ft_isdigit.
 *
 * @param c The character to check, passed as an int.
 * @return true if c is an alphabetic or digit character, false otherwise.
 */
bool	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
