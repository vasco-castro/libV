/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:18:04 by vsoares-          #+#    #+#             */
/*   Updated: 2025/08/21 11:04:42 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/string.h"

/**
 * @brief Concatenates two strings into a newly allocated string.
 * This function creates a new string by joining s1 and s2.
 * The result is allocated using ft_calloc and must be freed by the caller.
 *
 * @param s1 The first string (prefix)
 * @param s2 The second string (suffix)
 *
 * @return
 * A newly allocated string containing s1+s2, or NULL if allocation fails.
 * If s1 is NULL, only s2 is used. If s2 is NULL, only s1 is used.
 * If both are NULL, returns an empty string.

 * @see ft_strlen
 * 		ft_calloc
 * 		ft_memcpy
 */
char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	str = ft_calloc(s1_len + s2_len + 1, 1);
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, s1_len);
	ft_memcpy(str + s1_len, s2, s2_len);
	return (str);
}
