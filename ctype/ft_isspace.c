/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:42:21 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/23 16:06:15 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ctype.h"

/**
 * All white-space characters
 */
bool	ft_isspace(int c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}
