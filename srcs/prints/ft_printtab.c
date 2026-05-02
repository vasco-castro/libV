/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printtab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:25:41 by vsoares-          #+#    #+#             */
/*   Updated: 2026/05/02 19:46:05 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/prints.h"

/**
 * @brief Prints each string from an array of strings to standard output,
 *        with a newline after each string.
 *
 * @param tab Array of strings to print (must be NULL-terminated)
 * @return Total number of characters printed, or -1 if tab is NULL
 */
int	ft_printtab(char **tab)
{
	int	i;
	int	count;

	if (!tab)
		return (-1);
	i = 0;
	count = 0;
	while (tab[i])
		count += ft_println(tab[i++]);
	return (count);
}

/**
 * @brief Prints each string from an array of strings to specified file
 *        descriptor, with a newline after each string.
 *
 * @param tab Array of strings to print (must be NULL-terminated)
 * @param fd File descriptor to print to
 * @return Total number of characters printed, or -1 if tab is NULL
 *         or fd is invalid
 */
int	ft_printtab_fd(char **tab, int fd)
{
	int	i;
	int	count;

	if (!tab || fd < 0)
		return (-1);
	i = 0;
	count = 0;
	while (tab[i])
		count += ft_println_fd(tab[i++], fd);
	return (count);
}

/**
 * @brief Prints each string from an array with a custom delim.
 *
 * @param tab Array of strings to print (must be NULL-terminated)
 * @param delim String to print between elements
 * @return Total number of characters printed, or -1 if tab is NULL
 */
int	ft_printtab_delim(char *tab[], char *delim)
{
	int	i;
	int	count;

	if (!tab)
		return (-1);
	if (!delim)
		return (ft_printtab(tab));
	i = 0;
	count = 0;
	while (tab[i])
	{
		count += ft_printstr(tab[i++]);
		if (tab[i])
			count += ft_printstr(delim);
	}
	return (count);
}

/**
 * @brief Prints each string from an array with a custom delim to file
 *        descriptor.
 *
 * @param tab Array of strings to print (must be NULL-terminated)
 * @param delim String to print between elements
 * @param fd File descriptor to print to
 * @return Total number of characters printed, or -1 if tab is NULL or
 *         fd is invalid
 */
int	ft_printtab_delim_fd(char *tab[], char *delim, int fd)
{
	int	i;
	int	count;

	if (!tab || fd < 0)
		return (-1);
	if (!delim)
		return (ft_printtab_fd(tab, fd));
	i = 0;
	count = 0;
	while (tab[i])
	{
		count += ft_printstr_fd(tab[i++], fd);
		if (tab[i])
			count += ft_printstr_fd(delim, fd);
	}
	return (count);
}
