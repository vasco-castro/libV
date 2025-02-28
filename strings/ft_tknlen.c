/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tknlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 22:42:13 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/28 21:29:48 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/string.h"

/**
 * Returns a token lenght, which the limiter is char c.
 */
size_t	ft_tknlen(const char *tkn, char c)
{
	size_t	len;

	len = 0;
	while (tkn && tkn[len] && tkn[len] != c)
		len++;
	return (len);
}
