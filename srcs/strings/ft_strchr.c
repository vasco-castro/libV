/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 19:17:19 by vsoares-          #+#    #+#             */
/*   Updated: 2026/05/02 19:46:05 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/string.h"

/**
 * @brief Locate first occurrence of a character in a string.
 *
 * Searches for the first occurrence of character `c` (converted to `char`)
 * in the null-terminated string pointed to by `s`. The terminating null
 * byte is considered part of the string, so if `c` is `\0` a pointer to the
 * terminator is returned.
 *
 * @param s Pointer to the null-terminated string to be searched.
 * @param c Character to locate (passed as an `int`, converted to `char`).
 * @return Pointer to the first occurrence of `c` in `s`, or `NULL` if not found.
 */
char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char) c)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == (char) c)
		return ((char *) &s[i]);
	return (NULL);
}
