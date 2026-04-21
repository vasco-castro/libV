/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 17:08:37 by vsoares-          #+#    #+#             */
/*   Updated: 2026/01/10 15:32:42 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/string.h"

/**
 * @brief Creates a deep copy of a NULL-terminated array of strings.
 *
 * Allocates a new array and duplicates each string from src.
 * The caller is responsible for freeing the returned array with ft_tabfree().
 *
 * @param src The source NULL-terminated array of strings to copy.
 * @return A newly allocated copy of the array, or NULL if src is NULL
 *         or if any allocation fails.
 */
char	**ft_tabcpy(char **src)
{
	int		i;
	int		len;
	char	**tab;

	if (!src)
		return (NULL);
	len = ft_tablen(src);
	tab = malloc(sizeof(*tab) * (len + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < len)
	{
		tab[i] = ft_strdup(src[i]);
		if (!tab[i])
		{
			while (i--)
				free(tab[i]);
			free(tab);
			return (NULL);
		}
		++i;
	}
	tab[len] = NULL;
	return (tab);
}
