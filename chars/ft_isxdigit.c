/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:53:55 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/23 16:09:31 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libV.h"

/* All hexadecimal characters: 0-9 (isdigit), A-F, a-f */
int	ft_isxdigit(int c)
{
	return (((c >= 'a' && c <= 'f')
			|| (c >= 'A' && c <= 'F')) || ft_isdigit(c));
}
