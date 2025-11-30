/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_issign.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 12:11:23 by vsoares-          #+#    #+#             */
/*   Updated: 2025/08/13 12:11:23 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ctype.h"

/**
 * @brief Checks if a character is a sign ('+' or '-').
 *
 * @param c The character to check.
 * @return 0 if isn't a sign,
 * 		1 if it's '+' (positive sign),
 * 		and -1 if it's '-' (nagative sign).
 */
int	ft_issign(int c)
{
	if (c == '+')
		return (1);
	else if (c == '-')
		return (-1);
	return (0);
}
