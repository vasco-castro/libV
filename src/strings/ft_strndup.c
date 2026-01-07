/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 09:34:25 by vsoares-          #+#    #+#             */
/*   Updated: 2026/01/06 09:34:25 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/string.h"

/**
 * @brief Creates a duplicate of a string up to a maximum number of characters.
 *
 * This function allocates memory and creates a copy of the string src,
 * copying at most n characters. The copy is null-terminated. If src is
 * shorter than n characters, only the actual length is copied. Memory
 * is allocated using malloc() and should be freed by the caller.
 *
 * @param src The source string to duplicate
 * @param n The maximum number of characters to copy
 *
 * @return A pointer to the newly allocated duplicated string.
 *         Returns NULL if src is NULL or if memory allocation fails.
 *         The returned string is always null-terminated.
 */
char	*ft_strndup(const char *src, size_t n)
{
	size_t	len;
	char	*dst;

	if (!src)
		return (NULL);
	len = ft_strlen(src);
	if (len > n)
		len = n;
	dst = malloc(len + 1);
	if (!dst)
		return (NULL);
	dst[len] = 0;
	while (len-- > 0)
		dst[len] = src[len];
	return (dst);
}
