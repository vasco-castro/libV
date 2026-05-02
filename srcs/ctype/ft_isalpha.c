/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:13:26 by vsoares-          #+#    #+#             */
/*   Updated: 2026/05/02 19:46:05 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ctype.h"

/**
 * All alphabet characters.
 * Combination of ft_isupper + ft_islower.
 */
bool	ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}
