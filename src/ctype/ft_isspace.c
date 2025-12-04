/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:42:21 by vsoares-          #+#    #+#             */
/*   Updated: 2025/12/01 16:24:05 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ctype.h"

/**
 * All white-space characters
 * 09	HT		'\t' (horizontal tab)
 * 10	LF		'\n' (new line)
 * 11	VT		'\v' (vertical tab)
 * 12	FF		'\f' (form feed)
 * 13	CR		'\r' (carriage ret)
 * 32	SPACE	' ' (space)
 */
bool	ft_isspace(int c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}
