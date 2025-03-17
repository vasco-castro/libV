/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printbool.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 17:15:44 by vsoares-          #+#    #+#             */
/*   Updated: 2025/03/06 17:19:28 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/prints.h"

int	ft_printbool(bool b)
{
	if (b)
		return (ft_printstr("true"));
	else
		return (ft_printstr("false"));
}

int	ft_printbool_fd(bool b, int fd)
{
	if (b)
		return (ft_printstr_fd("true", fd));
	else
		return (ft_printstr_fd("false", fd));
}
