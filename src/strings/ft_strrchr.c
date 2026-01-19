/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 19:17:19 by vsoares-          #+#    #+#             */
/*   Updated: 2026/01/17 12:46:34 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/string.h"

/**
 * @brief Locate last occurrence of a character in a string.
 *
 * Searches for the last occurrence of character `c` (converted to `char`)
 * in the null-terminated string pointed to by `s`. The terminating null
 * byte is considered part of the string, so if `c` is `\0` a pointer to the
 * terminator is returned.
 *
 * @param s Pointer to the null-terminated string to be searched.
 * @param c Character to locate (passed as an `int`, converted to `char`).
 * @return Pointer to the last occurrence of `c` in `s`, or `NULL` if not found.
 */
char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			chr;
	char			*rchr;

	i = 0;
	chr = (char)c;
	rchr = NULL;
	while (s[i])
	{
		if (s[i] == chr)
			rchr = ((char *)&s[i]);
		i++;
	}
	if (s[i] == chr)
		rchr = ((char *)&s[i]);
	return (rchr);
}
