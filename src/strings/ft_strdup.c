/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 17:04:25 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/23 17:52:42 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/string.h"

/**
 * @brief Creates a duplicate of a string.
 *
 * This function allocates memory and creates a complete copy of the string src.
 * The copy includes all characters up to and including the null terminator.
 * Memory is allocated using malloc() and should be freed by the caller.
 * Safely handles NULL pointers.
 *
 * @param src The source string to duplicate
 *
 * @return A pointer to the newly allocated duplicated string.
 *         Returns NULL if src is NULL or if memory allocation fails.
 *         The returned string is always null-terminated.
 */
char	*ft_strdup(const char *src)
{
	size_t	len;
	char	*dst;

	if (!src)
		return (NULL);
	len = ft_strlen(src);
	dst = malloc(len + 1);
	if (!dst)
		return (NULL);
	dst[len] = 0;
	while (len-- > 0)
		dst[len] = src[len];
	return (dst);
}
