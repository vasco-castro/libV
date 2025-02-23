/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iscntrl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:42:21 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/23 16:09:47 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Every non-printable characters and isspace characters */
int	ft_iscntrl(int c)
{
	return (c >= 0 && c <= 31 || c == 127);
}
