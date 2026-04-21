/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:32:48 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/23 16:33:56 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/memory.h"

/**
 * @brief Compares the first n bytes of two memory areas.
 *
 * Both s1 and s2 are interpreted as unsigned char arrays.
 *
 * @param s1 Pointer to the first memory area.
 * @param s2 Pointer to the second memory area.
 * @param n Number of bytes to compare.
 * @return An integer less than, equal to, or greater than zero if the first n
 *         bytes of s1 are found to be less than, equal to, or greater than
 *         the first n bytes of s2, respectively.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned int	r;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	r = 0;
	while ((i < n) && (r == 0))
	{
		r = str1[i] - str2[i];
		i++;
	}
	return (r);
}
