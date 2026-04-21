/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:01:51 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/23 16:33:56 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/memory.h"

/**
 * @brief Fills the first len bytes of memory area b with the constant byte c.
 *
 * @param b Pointer to the memory area to fill.
 * @param c The byte value to set (passed as int, converted to unsigned char).
 * @param len Number of bytes to fill.
 * @return A pointer to the memory area b.
 */
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*src;
	size_t			i;

	i = 0;
	src = (unsigned char *) b;
	c = (unsigned char) c;
	while (i < len)
		src[i++] = c;
	return (b);
}
