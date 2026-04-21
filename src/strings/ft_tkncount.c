/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tkncount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 22:42:13 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/28 21:28:53 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/string.h"

/**
 * @brief Counts the number of tokens in a string separated by a delimiter.
 *
 * A token is a non-empty sequence of characters not equal to c.
 * Consecutive delimiters are treated as a single separator.
 *
 * @param str The string to count tokens in.
 * @param c The delimiter character separating tokens.
 * @return The number of tokens found in str.
 */
size_t	ft_tkncount(const char *str, char c)
{
	size_t	i;
	size_t	tokens;

	i = 0;
	tokens = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
		{
			while (str[i] && str[i] != c)
				i++;
			tokens++;
		}
	}
	return (tokens);
}
