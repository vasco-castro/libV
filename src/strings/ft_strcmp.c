/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 20:31:48 by vsoares-          #+#    #+#             */
/*   Updated: 2025/08/21 10:35:38 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/string.h"

/**
 * @brief Compares two strings.
 *
 * This function compares the strings s1 and s2 character by character until:
 * - A null terminator is reached in either string
 * - A difference is found
 *
 * @param s1 The first string to compare
 * @param s2 The second string to compare
 *
 * @return An integer less than, equal to, or greater than zero if s1 is found,
 *         respectively, to be less than, to match, or be greater than s2.
 *         Returns 0 if both strings are NULL, returns -1 if only s1 is NULL,
 *         returns 1 if only s2 is NULL.
 */
int	ft_strcmp(const char *s1, const char *s2)
{
	return (ft_strncmp(s1, s2, SIZE_MAX));
}
