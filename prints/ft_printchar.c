/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 17:59:07 by vsoares-          #+#    #+#             */
/*   Updated: 2025/03/06 17:16:21 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/prints.h"

int	ft_printchar(int c)
{
	return (write(1, &c, 1));
}

int	ft_printchar_fd(char c, int fd)
{
	return (write(fd, &c, 1));
}
