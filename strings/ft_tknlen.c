/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tknlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 22:42:13 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/23 17:30:49 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/string.h"

/**
 * Returns a token lenght, which the limiter is char c.
 */
size_t ft_tknlen(const char *str, char c)
{
	size_t len;

	len = 0;
	while (str && str[len] && str[len] != c)
		len++;
	return (len);
}
