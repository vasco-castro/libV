/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:48:11 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/23 16:07:14 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* All printable characters, combination of isgraph + isspace */
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
