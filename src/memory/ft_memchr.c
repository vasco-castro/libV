/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:32:00 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/23 16:33:56 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/memory.h"

/**
 * @brief Locates the first occurrence of a byte value in a memory area.
 *
 * Scans the first n bytes of memory area s for the byte value c.
 *
 * @param s Pointer to the memory area to search.
 * @param c The byte value to locate (passed as int, interpreted as unsigned char).
 * @param n Number of bytes to search.
 * @return Pointer to the first occurrence of c in s, or NULL if not found
 *         within the first n bytes.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	unsigned char	chr;

	src = (unsigned char *) s;
	chr = (unsigned char) c;
	while (n-- > 0)
	{
		if (*(src) == chr)
			return ((void *) src);
		src++;
	}
	return (NULL);
}
