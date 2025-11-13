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

/*
 * This function returns true if debug mode is ON, and false otherwise.
 */
bool	debug_mode(void)
{
	return (change_debug_mode(false));
}
/*
 * This function toggles the debug mode.
 */
bool	change_debug_mode(bool set)
{
	static bool	debug = false;

	if (set)
		debug = !debug;
	return (debug);
}

/*
 * This function checks if the given argument is a debug flag.
 */
bool	is_debug_flag(const char *arg)
{
	if (!arg)
		return (false);
	return (ft_strcmp(arg, "--debug") == 0 || ft_strcmp(arg, "-d") == 0);
}
