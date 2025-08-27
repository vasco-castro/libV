/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:30:12 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/23 16:33:56 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/memory.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*tmp_dst;
	char	*tmp_src;

	if (!src && !dst)
		return (NULL);
	tmp_dst = (char *) dst;
	tmp_src = (char *) src;
	while (n-- > 0)
		*(tmp_dst++) = *(tmp_src++);
	return (dst);
}
