/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isgraph.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:13:26 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/23 17:48:53 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ctype.h"

/**
 * All graphical characters.
 * Combination of:
 * isalnum + ispunct;
 * isprint - isspace;
 */
bool	ft_isgraph(int c)
{
	return (ft_isalnum(c) || ft_ispunct(c));
}
