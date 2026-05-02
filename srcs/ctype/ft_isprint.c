/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:48:11 by vsoares-          #+#    #+#             */
/*   Updated: 2026/05/02 19:46:05 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ctype.h"

/**
 * All printable characters.
 * Combination of:
 * isgraph + SPACE character (32)
 */
bool	ft_isprint(int c)
{
	return (ft_isgraph(c) || (c == ' '));
	return (c >= 32 && c <= 126);
}
