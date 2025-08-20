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

#include "../inc/ctype.h"

/**
 * @brief Checks if a character is a sign ('+' or '-').
 *
 * @param c The character to check.
 * @return 0 if the character is not a sign, 1 if it is '+', or -1 if it is '-'.
 */
int	ft_issign(int c)
{
	if (c == '+')
		return (1);
	else if (c == '-')
		return (-1);
	else
		return (0);
}
