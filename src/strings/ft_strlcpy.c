/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 19:59:53 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/28 21:21:34 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/string.h"

/**
 * @brief Copies a NUL-terminated string into a buffer of given size.
 *
 * Copies the string `src` into `dst`, writing at most `size` bytes
 * (including the terminating NUL). If `size` is greater than 0,
 * the result is always NUL-terminated.
 *
 * @param dst The destination buffer.
 * @param src The source NUL-terminated string to copy.
 * @param size The total size of the destination buffer (dst).
 * @return The length of the source string `src`.
 *         If the return value is >= size, truncation occurred.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	copy_len;

	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	copy_len = size - 1;
	if (src_len < copy_len)
		copy_len = src_len;
	ft_memcpy(dst, src, copy_len);
	dst[copy_len] = '\0';
	return (src_len);
}
