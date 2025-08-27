/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:01:56 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/23 17:50:53 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ctype.h"

/**
 * All ascii characters (printable and non-printable).
 * Combination of: ft_iscntrl + ft_isprint;
 */
bool	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
