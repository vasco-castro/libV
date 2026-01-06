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
