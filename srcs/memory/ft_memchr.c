/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:32:00 by vsoares-          #+#    #+#             */
/*   Updated: 2026/05/02 21:53:22 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/memory.h"

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
