/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printbool.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 17:15:44 by vsoares-          #+#    #+#             */
/*   Updated: 2026/05/04 02:11:10 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_colors.h"

int	ft_printbool(bool b)
{
	if (b)
		return (ft_printstr(BLUE "true" RESET));
	else
		return (ft_printstr(BLUE "false" RESET));
}

int	ft_printbool_fd(bool b, int fd)
{
	if (b)
		return (ft_printstr_fd(BLUE "true" RESET, fd));
	else
		return (ft_printstr_fd(BLUE "false" RESET, fd));
}
