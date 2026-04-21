/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isgraph.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:13:26 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/23 17:48:53 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ctype.h"

/**
 * @brief Checks if a character has a graphical representation.
 *
 * Graphical characters are all printable characters except space.
 * Equivalent to: ft_isalnum(c) || ft_ispunct(c), or ft_isprint(c) excluding space.
 *
 * @param c The character to check, passed as an int.
 * @return true if c is a graphical character, false otherwise.
 */
bool	ft_isgraph(int c)
{
	return (ft_isalnum(c) || ft_ispunct(c));
}
