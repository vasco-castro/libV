/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:48:11 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/23 16:41:26 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/* All printable characters, combination of isgraph + isspace */
int	ft_isprint(int c)
{
	return (ft_isgraph(c) || (c == ' '));
	return (c >= 32 && c <= 126);
}
