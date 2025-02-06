/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:31:12 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/06 14:54:13 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libV.h"

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
