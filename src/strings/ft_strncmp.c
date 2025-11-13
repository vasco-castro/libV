/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:28:13 by vsoares-          #+#    #+#             */
/*   Updated: 2025/08/21 10:35:35 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/string.h"

/**
 * @brief Compares two strings up to a specified number of characters.
 *
 * This function compares the strings s1 and s2 character by character until:
 * - n bytes have been compared
 * - A null terminator is reached in either string
 * - A difference is found
 *
 * @param s1 The first string to compare
 * @param s2 The second string to compare
 * @param n  The maximum number of characters to compare
 *
 * @return An integer less than, equal to, or greater than zero if s1 is found,
 *         respectively, to be less than, to match, or be greater than s2.
 *         Returns 0 if n is 0. Returns -1 if s1 is NULL and s2 is not,
 *         returns 1 if s2 is NULL and s1 is not, returns 0 if both are NULL.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	if (!s1 && !s2)
		return (0);
	else if (!s1)
		return (-1);
	else if (!s2)
		return (1);
	i = 0;
	while (s1[i] && s2[i] && i < n - 1 && s1[i] == s2[i])
		i++;
	if (i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
