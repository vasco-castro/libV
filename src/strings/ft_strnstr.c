/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:33:05 by vsoares-          #+#    #+#             */
/*   Updated: 2026/01/17 13:57:50 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/string.h"

/**
 * @brief Locate a substring in a string, searching at most `len` bytes.
 *
 * Searches for the first occurrence of the null-terminated string `needle`
 * within the string `haystack`, where not more than `len` characters are
 * searched. If `needle` is an empty string, `haystack` is returned. The
 * search does not read past the first `len` characters of `haystack`.
 *
 * @param haystack The string to be searched.
 * @param needle The substring to search for.
 * @param len Maximum number of characters of `haystack` to search.
 * @return Pointer to the beginning of the located substring in `haystack`,
 * or `NULL` if the substring is not found within the first `len` characters.
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[0] == 0)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		while (haystack[i + j] == needle[j] && haystack[i + j] && i + j < len)
		{
			j++;
			if (needle[j] == 0)
				return ((char *)&haystack[i]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
