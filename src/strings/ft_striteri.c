/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:32:18 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/23 17:31:10 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/string.h"

/**
 * @brief Applies a function to each character of a string, passing the index.
 *
 * Iterates over each character of s and calls f with the character's index
 * and a pointer to the character, allowing in-place modification.
 *
 * @param s The string to iterate over.
 * @param f Function to apply to each character, receiving its index and address.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s && s[i] && f)
	{
		f(i, &s[i]);
		i++;
	}
}
