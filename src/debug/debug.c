/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 10:21:29 by vsoares-          #+#    #+#             */
/*   Updated: 2025/11/16 18:02:41 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"
#include <stdbool.h>

/**
 * @brief Returns the current debug mode state.
 *
 * @return true if debug mode is ON, false otherwise.
 */
bool	debug_mode(void)
{
	return (change_debug_mode(false));
}

/**
 * @brief Toggles or queries the debug mode state.
 *
 * If set is true, the internal debug state is toggled. The function always
 * returns the current state after the optional toggle.
 *
 * @param set If true, toggles the debug state; if false, only queries it.
 * @return The current debug mode state after the optional toggle.
 */
bool	change_debug_mode(bool set)
{
	static bool	debug = false;

	if (set)
		debug = !debug;
	return (debug);
}

/**
 * @brief Checks if the given argument is a debug flag.
 *
 * Recognized debug flags are "--debug" and "-d".
 *
 * @param arg The command-line argument string to check.
 * @return true if arg is "--debug" or "-d", false otherwise.
 */
bool	is_debug_flag(const char *arg)
{
	if (!arg)
		return (false);
	return (ft_strcmp(arg, "--debug") == 0
		|| ft_strcmp(arg, "-d") == 0);
}

/**
 * @brief Parses and removes debug flags from the argument list.
 *
 * Scans argv for "--debug" or "-d". If found, removes the flag from argv,
 * decrements *argc, and enables debug mode.
 *
 * @param argc Pointer to the argument count (modified if a flag is found).
 * @param argv The argument array (modified in place if a flag is found).
 * @return true if a debug flag was found and processed, false otherwise.
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

/**
 * @brief Prints a formatted debug message to stderr, if debug mode is enabled.
 *
 * If debug mode is off, does nothing and returns 0. If str is NULL, returns -1.
 * Supports the same format specifiers as ft_printf.
 *
 * @param str Format string containing conversion specifiers.
 * @param ... Variable arguments to format and print.
 * @return The number of characters printed, 0 if debug mode is off,
 *         or -1 if str is NULL.
 */
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
