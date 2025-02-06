/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:01:51 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/06 14:54:11 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libV.h"

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
