/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:13:26 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/23 16:33:56 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ctype.h"

/**
 * @brief Checks if a character is alphabetic.
 *
 * Combination of ft_isupper + ft_islower.
 *
 * @param c The character to check, passed as an int.
 * @return true if c is an uppercase or lowercase letter, false otherwise.
 */
bool	ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}
