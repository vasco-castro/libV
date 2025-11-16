/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 10:21:29 by vsoares-          #+#    #+#             */
/*   Updated: 2025/11/15 21:40:36 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"
#include <stdbool.h>

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

// TODO: Find if there's any arg in argv that is a debug flag
// TODO: If there is a debug flag inside the args, activate debug mode
// TODO: Delete the debug flag both from argc and argv
void	parse_debug_mode(int *argc, char *argv[])
{
	int		i;
	int		debug_flag_index;
	char	*debug_str;

	i = 0;
	debug_flag_index = -1;
	while (*argc > i++)
	{
		if (is_debug_flag(argv[i]))
		{
			change_debug_mode(true);
			debug_flag_index = i;
			break ;
		}
	}
	if (debug_flag_index != -1)
	{
		while (*argc > i && debug_flag_index != -1)
		{
			argv[i] = argv[i + 1];
			i++;
		}
		(*argc)--;
		argv[i] = NULL;
	}
}
