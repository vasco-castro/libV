/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tkncount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 22:42:13 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/28 21:28:53 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/string.h"

/**
 * Counts tokens inside a string, which the limiter is char c.
 */
size_t	ft_tkncount(const char *str, char c)
{
	size_t	i;
	size_t	tokens;

	i = 0;
	tokens = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
		{
			while (str[i] && str[i] != c)
				i++;
			tokens++;
		}
	}
	return (tokens);
}
