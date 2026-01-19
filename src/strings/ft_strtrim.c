/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 20:54:59 by vsoares-          #+#    #+#             */
/*   Updated: 2026/01/17 13:57:53 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/string.h"

/**
 * @brief Trim characters from both ends of a string.
 *
 * Allocates and returns a new string which is the result of removing any
 * leading and trailing characters from `s1` that are present in `set`.
 * If `s1` or `set` is `NULL`, the function returns `NULL`.
 *
 * @param s1 The input string to trim.
 * @param set A null-terminated string containing characters to be trimmed
 * from both ends of `s1`.
 * @return A newly allocated trimmed string (must be freed by the caller),
 * or `NULL` on allocation failure or if `s1`/`set` is `NULL`.
 */
char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}
