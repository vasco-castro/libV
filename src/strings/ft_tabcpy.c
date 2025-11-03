/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 17:08:37 by vsoares-          #+#    #+#             */
/*   Updated: 2025/11/03 20:53:52 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/string.h"

/**
 * ft_tabcpy - Creates a deep copy of a NULL-terminated array of strings.
 * @src: The source array of strings (NULL-terminated).
 *
 * Return: A newly allocated copy of the array, or NULL on failure.
 * 	The caller is responsible for freeing the returned array with ft_tabdel().
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
