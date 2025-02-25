/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:52:46 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/23 16:08:12 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ctype.h"

/**
 * Space (32) or Horizontal Tab character (9).
 */
bool	ft_isblank(int c)
{
	return (c == '\t' || c == 32);
}
