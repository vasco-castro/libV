/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 20:55:45 by vsoares-          #+#    #+#             */
/*   Updated: 2025/11/03 20:56:02 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/string.h"

/**
 * @brief Frees a NULL-terminated array of strings and the array itself.
 *
 * Iterates over each string in the array, frees it, then frees the array.
 * Does nothing if tab is NULL.
 *
 * @param tab The NULL-terminated array of strings to free.
 */
void	ft_tabfree(char **tab)
{
	size_t	len;

	if (!tab)
		return ;
	len = 0;
	while (tab[len])
		free(tab[len++]);
	free(tab);
}
