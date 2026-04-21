/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 12:33:21 by vsoares-          #+#    #+#             */
/*   Updated: 2026/04/16 12:33:21 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/memory.h"

/**
 * @brief Frees a pointer if it is not NULL.
 *
 * Wrapper around free() that safely ignores NULL pointers.
 *
 * @param ptr Pointer to the memory to free. If NULL, no action is taken.
 */
void	ft_free(void *ptr)
{
	if (ptr)
		free(ptr);
}
