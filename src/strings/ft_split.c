/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 22:42:13 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/28 21:34:25 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/string.h"

static char	**split(const char *s, char c, char	**tab, size_t words)
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

char	**ft_split(const char *s, char c)
{
	char	**tab;
	size_t	words;

	if (!s)
		return (NULL);
	words = ft_tkncount((char *) s, c);
	tab = malloc((words + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	return (split(s, c, tab, words));
}
