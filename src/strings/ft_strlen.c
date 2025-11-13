/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 18:22:58 by vsoares-          #+#    #+#             */
/*   Updated: 2025/08/21 10:36:28 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/string.h"

/**
 * @brief Calculates the length of a string.
 *
 * This function counts the number of characters in the string s up to, but
 * not including, the terminating null character. Safely handles NULL pointers.
 *
 * @param s The string to calculate length for
 *
 * @return The number of characters in the string s. Returns 0 if s is NULL.
 */
size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s && s[len])
		len++;
	return (len);
}
