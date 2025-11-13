/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 10:21:29 by vsoares-          #+#    #+#             */
/*   Updated: 2025/11/13 10:21:29 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

bool	debug_mode(void)
{
	return (change_debug_mode(false));
}

bool	change_debug_mode(bool set)
{
	static bool	debug = false;

	if (set)
		debug = !debug;
	return (debug);
}

bool	is_debug_flag(const char *arg)
{
	if (!arg)
		return (false);
	return (ft_strcmp(arg, "--debug") == 0 || ft_strcmp(arg, "-d") == 0);
}
