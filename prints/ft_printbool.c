/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printbool.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 17:15:44 by vsoares-          #+#    #+#             */
/*   Updated: 2025/04/25 03:10:11 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/prints.h"

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
