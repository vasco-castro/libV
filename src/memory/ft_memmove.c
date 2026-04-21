/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:31:12 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/23 16:33:56 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/memory.h"

/**
 * @brief Copies len bytes from memory area src to memory area dst,
 *        handling overlapping memory regions correctly.
 *
 * Unlike ft_memcpy, ft_memmove safely handles the case where src and dst
 * overlap by copying from the end when dst > src.
 *
 * @param dst Pointer to the destination memory area.
 * @param src Pointer to the source memory area.
 * @param len Number of bytes to copy.
 * @return A pointer to dst. Returns NULL if both dst and src are NULL.
 */
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmp_dst;

	if (!dst && !src)
		return (NULL);
	tmp_dst = (char *) dst;
	if (dst > src)
	{
		dst += len;
		src += len;
		while (len--)
			*(char *)--dst = *(char *)--src;
	}
	else
	{
		while (len--)
			*(char *)dst++ = *(char *)src++;
	}
	return (tmp_dst);
}
