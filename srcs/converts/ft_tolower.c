/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 18:57:15 by vsoares-          #+#    #+#             */
/*   Updated: 2026/05/02 21:52:49 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
