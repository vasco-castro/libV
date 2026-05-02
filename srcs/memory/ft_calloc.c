/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 20:58:29 by vsoares-          #+#    #+#             */
/*   Updated: 2026/05/02 21:53:22 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/memory.h"

/**
 * @brief Allocates memory and initializes it to zero.
 *
 * This function allocates memory for an array of count elements of size bytes
 * each and initializes all bytes in the allocated memory to zero.
 * It includes overflow protection.
 *
 * @param count Number of elements to allocate
 * @param size Size of each element in bytes
 *
 * @return A pointer to the allocated memory. Returns NULL if allocation fails
 *         or if overflow would occur.
 */
void	*ft_calloc(size_t count, size_t size)
{
	void	*alloc;
	size_t	total_size;

	total_size = count * size;
	if (count && ((total_size / count) != size))
		return (NULL);
	alloc = malloc(total_size);
	if (!alloc)
		return (NULL);
	ft_bzero(alloc, total_size);
	return (alloc);
}
