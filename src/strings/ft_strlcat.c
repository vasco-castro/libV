/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:05:31 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/23 17:31:10 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/string.h"

/**
 * @brief Appends a NUL-terminated string to the end of another string.
 *
 * Appends the string `src` to the end of `dst`, writing at most
 * `size` bytes in total (including the terminating NUL). The initial
 * length of `dst` is bounded by `size` to prevent overreading.
 *
 * @param dst The destination buffer containing a NUL-terminated string.
 * @param src The source NUL-terminated string to append.
 * @param size The total size of the destination buffer (dst).
 * @return The length of the string it tried to create:
 *         initial length of `dst` + length of `src`.
 *         If the return value is >= size, truncation occurred.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	copy_len;

	dst_len = ft_strnlen(dst, size);
	src_len = ft_strlen(src);
	if (dst_len == size)
		return (size + src_len);
	copy_len = size - dst_len - 1;
	if (src_len < copy_len)
		copy_len = src_len;
	ft_memcpy(dst + dst_len, src, copy_len);
	dst[dst_len + copy_len] = '\0';
	return (dst_len + src_len);
}
