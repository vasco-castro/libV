/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 22:42:13 by vsoares-          #+#    #+#             */
/*   Updated: 2025/09/07 11:25:14 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/string.h"

/**
 * @brief Fills the tab array with substrings split from s by delimiter c.
 *
 * @param s The input string to split.
 * @param c The delimiter character.
 * @param tab The array to fill with substrings.
 * @param words The number of words/substrings to extract.
 * @return The filled array of substrings, or NULL on failure.
 */
static char	**fill_tab(const char *s, char c, char	**tab, size_t words)
{
	size_t	i;
	size_t	j;
	size_t	wlen;

	i = 0;
	j = 0;
	while (i < words)
	{
		while (s[j] && s[j] == c)
			j++;
		wlen = ft_tknlen(s + j, c);
		tab[i] = ft_substr(s + j, 0, wlen);
		if (!tab[i])
			return (ft_tabdel(tab, i));
		j += wlen;
		i++;
	}
	tab[i] = NULL;
	return (tab);
}

/**
 * @brief Splits a string into an array of substrings using a delimiter.
 *
 * This function allocates and returns an array of strings obtained by splitting
 * the input string @p s using the character @p c as a delimiter. The array is
 * terminated by a NULL pointer.
 *
 * @param s The input string to split.
 * @param c The delimiter character.
 * @return A NULL-terminated array of substrings, or NULL on failure.
 */
char	**ft_split(const char *s, char c)
{
	char	**tab;
	size_t	words;

	if (!s)
		return (NULL);
	words = ft_tkncount(s, c);
	tab = malloc((words + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	return (fill_tab(s, c, tab, words));
}
