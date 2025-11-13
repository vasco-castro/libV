/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tknlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 22:42:13 by vsoares-          #+#    #+#             */
/*   Updated: 2025/08/21 10:35:28 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/string.h"

/**
 * Calculates the length of a token in a string, stopping at the first occurrence
 * of a specified delimiter character.
 *
 * @param tkn The input string to evaluate.
 * @param c   The delimiter character that marks the end of the token.
 * @return The length of the token before the delimiter or the end of the string.
 */
size_t	ft_tknlen(const char *tkn, char c)
{
	size_t	len;

	len = 0;
	while (tkn && tkn[len] && tkn[len] != c)
		len++;
	return (len);
}
