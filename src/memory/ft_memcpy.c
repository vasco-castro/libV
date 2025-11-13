/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:30:12 by vsoares-          #+#    #+#             */
/*   Updated: 2025/08/21 14:13:10 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/memory.h"

/**
 * @brief Copies n bytes from memory area src to memory area dst.
 *
 * This function copies n bytes from memory area src to memory area dst.
 * The memory areas must not overlap. Handles special cases:
 * - If n is 0, returns dst without copying anything
 * - If src is NULL and n > 0, returns dst unchanged (no copy performed)
 * - If dst is NULL and n > 0, returns NULL (unsafe to write)
 * - If both src and dst are NULL, returns NULL
 *
 * @param dst Pointer to the destination array where content is to be copied
 * @param src Pointer to the source of data to be copied
 * @param n Number of bytes to copy
 *
 * @return A pointer to dst. Returns NULL if dst is NULL.
 */
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*tmp_dst;
	char	*tmp_src;

	if (n == 0)
		return (dst);
	if (!src || !dst)
		return (NULL);
	tmp_dst = (char *)dst;
	tmp_src = (char *)src;
	while (n-- > 0)
		*(tmp_dst++) = *(tmp_src++);
	return (dst);
}
