/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 18:57:15 by vsoares-          #+#    #+#             */
/*   Updated: 2026/05/04 02:05:38 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

/**
 * @brief Converts an uppercase letter to lowercase.
 * @param c The character to be converted.
 * @return The lowercase equivalent of the character if it is uppercase,
 *         otherwise the character unchanged.
 */
int	ft_tolower(int c)
{
	if (ft_isupper(c))
		return (c + ('a' - 'A'));
	return (c);
}
