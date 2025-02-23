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

/**
 * All ascii characters (printable and non-printable).
 * Combination of:
 * iscntrl + isprint;
 */
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
