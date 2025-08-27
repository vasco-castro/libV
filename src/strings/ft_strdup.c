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

char	*ft_strdup(const char *src)
{
	int		len;
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
