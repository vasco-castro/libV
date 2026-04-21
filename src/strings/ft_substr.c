/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:20:49 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/28 21:21:54 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/string.h"

/**
 * @brief Extracts a substring from a string.
 *
 * Allocates and returns a new string that is a substring of s, starting
 * at index start and of at most len characters.
 *
 * @param s The source string to extract from.
 * @param start The starting index in s for the substring.
 * @param len The maximum length of the substring.
 * @return A pointer to the newly allocated substring, an empty string if
 *         start is beyond the end of s, or NULL if allocation fails.
 */
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	slen;
	char	*sub;

	slen = ft_strlen(s);
	if (start > slen)
		return (ft_strdup(""));
	if (len > slen - start)
		len = slen - start;
	sub = ft_calloc(len + 1, sizeof(char));
	if (!sub)
		return (NULL);
	return (ft_memcpy(sub, s + start, len));
}
