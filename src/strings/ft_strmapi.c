/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:19:18 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/28 21:22:42 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/string.h"

/**
 * @brief Applies a function to each character of a string and returns a new string.
 *
 * Creates a new allocated string by applying f to each character of s,
 * passing the character's index and value.
 *
 * @param s The source string to map over.
 * @param f Function to apply to each character, receiving its index and value.
 * @return A newly allocated string with the mapped characters,
 *         or NULL if s or f is NULL, or if allocation fails.
 */
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	if (!s || !f)
		return (NULL);
	str = malloc(ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = 0;
	return (str);
}
