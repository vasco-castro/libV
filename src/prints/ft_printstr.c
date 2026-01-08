/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 18:01:23 by vsoares-          #+#    #+#             */
/*   Updated: 2025/03/06 17:16:27 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/prints.h"
#include "../../include/string.h"

int	ft_printstr(char *str)
{
	if (!str)
		return (ft_printstr("(null)"));
	return (write(1, str, ft_strlen(str)));
}

int	ft_printstr_fd(char *str, int fd)
{
	if (!str)
		return (ft_printstr_fd("(null)", fd));
	return (write(fd, str, ft_strlen(str)));
}

int	ft_println(char *str)
{
	return (ft_printstr(str)
		+ ft_printchar('\n'));
}

int	ft_println_fd(char *str, int fd)
{
	return (ft_printstr_fd(str, fd)
		+ ft_printchar_fd('\n', fd));
}
