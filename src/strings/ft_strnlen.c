/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 18:22:58 by vsoares-          #+#    #+#             */
/*   Updated: 2025/08/21 10:36:28 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/string.h"

/**
 * @brief Calculates the length of a string up to a maximum number of characters.
 *
 * This function counts the number of characters in the string s up to, but
 * not including, the terminating null character or until n characters have
 * been examined, whichever comes first. Safely handles NULL pointers.
 *
 * @param s The string to calculate length for
 * @param n The maximum number of characters to examine
 *
 * @return The number of characters in the string s up to n characters.
 *         Returns 0 if s is NULL. If no null terminator is found within
 *         the first n characters, returns n.
 */
size_t	ft_strnlen(const char *s, size_t n)
{
	size_t	len;

	len = 0;
	while (s && s[len] && len < n)
		len++;
	return (len);
}
