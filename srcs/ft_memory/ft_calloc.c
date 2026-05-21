/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 20:58:29 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/23 16:33:56 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"

/**
 * @brief Allocates memory and initializes it to zero.
 *
 * This function allocates memory for an array of n elements of size bytes
 * each and initializes all bytes in the allocated memory to zero.
 * It includes overflow protection.
 *
 * @param n Number of elements to allocate
 * @param size Size of each element in bytes
 *
 * @return A pointer to the allocated memory. Returns NULL if allocation fails
 *         or if overflow would occur.
 */
void	*ft_calloc(size_t n, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = n * size;
	if (n && (total_size / n != size))
		return (NULL);
	ptr = malloc(total_size);
	if (ptr)
		ft_bzero(ptr, total_size);
	return (ptr);
}
