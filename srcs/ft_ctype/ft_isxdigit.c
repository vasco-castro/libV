/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:53:55 by vsoares-          #+#    #+#             */
/*   Updated: 2026/05/04 01:22:50 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

/**
 * All hexadecimal characters:
 * 0-9 (ft_isdigit), A-F, a-f
 */
bool	ft_isxdigit(int c)
{
	return (((c >= 'a' && c <= 'f')
			|| (c >= 'A' && c <= 'F')) || ft_isdigit(c));
}
