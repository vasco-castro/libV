/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:53:55 by vsoares-          #+#    #+#             */
/*   Updated: 2026/05/02 21:53:22 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ctype.h"

/**
 * All hexadecimal characters:
 * 0-9 (ft_isdigit), A-F, a-f
 */
bool	ft_isxdigit(int c)
{
	return (((c >= 'a' && c <= 'f')
			|| (c >= 'A' && c <= 'F')) || ft_isdigit(c));
}
