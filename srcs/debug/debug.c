/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 10:21:29 by vsoares-          #+#    #+#             */
/*   Updated: 2026/05/02 21:52:49 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * This function returns true if debug mode is ON, and false otherwise.
 */
bool	debug_mode(void)
{
	return (change_debug_mode(false));
}

/*
 * This function toggles the debug mode when set is true.
 * Returns the current debug state.
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
	return (ft_strcmp(arg, "--debug") == 0
		|| ft_strcmp(arg, "-d") == 0);
}

/*
 * Parses debug flag: "--debug" or "-d"
 * Removes the flag from argc and argv, and enables debug mode if found.
 * Returns true if a debug flag was found and processed, false otherwise.
 */
bool	parse_debug_mode(int *argc, char *argv[])
{
	int		i;
	int		j;

	if (!argc || !argv || *argc <= 0)
		return (false);
	i = 1;
	while (i < *argc)
	{
		if (is_debug_flag(argv[i]))
		{
			change_debug_mode(true);
			j = i;
			while (j < *argc)
			{
				argv[j] = argv[j + 1];
				j++;
			}
			(*argc)--;
			argv[*argc] = NULL;
			return (true);
		}
		i++;
	}
	return (false);
}

int	debug(const char *str, ...)
{
	va_list	ap;
	int		len;

	if (debug_mode() == false)
		return (0);
	if (!str)
		return (-1);
	va_start(ap, str);
	len = ft_vdprintf(STDERR_FILENO, str, ap);
	va_end(ap);
	return (len);
}
