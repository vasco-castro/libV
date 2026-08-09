/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printtab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:25:41 by vsoares-          #+#    #+#             */
/*   Updated: 2026/05/04 01:09:10 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * @brief Prints each string from an array of strings to standard output.
 *
 * @param tab Array of strings to print (must be NULL-terminated)
 * @return Total number of characters printed, or -1 if tab is NULL
 */
int	ft_printtab(char **tab)
{
	return (ft_printtab_join(tab, ""));
}

/**
 * @brief Prints each string from an array of strings to specified file
 *        descriptor.
 *
 * @param tab Array of strings to print (must be NULL-terminated)
 * @param fd File descriptor to print to
 * @return Total number of characters printed, or -1 if tab is NULL
 *         or fd is invalid
 */
int	ft_printtab_fd(char **tab, int fd)
{
	return (ft_printtab_join_fd(tab, "", fd));
}

/**
 * @brief Prints each string from an array with a custom separator.
 *
 * @param tab Array of strings to print (must be NULL-terminated)
 * @param sep String to print between elements
 * @return Total number of characters printed, or -1 if tab is NULL
 */
int	ft_printtab_join(char *tab[], char *sep)
{
	int	i;
	int	count;

	if (!tab)
		return (-1);
	if (!sep)
		sep = "";
	i = 0;
	count = 0;
	while (tab[i])
	{
		count += ft_printstr(tab[i++]);
		if (tab[i])
			count += ft_printstr(sep);
	}
	return (count);
}

/**
 * @brief Prints each string from an array with a custom separator to file
 *        descriptor.
 *
 * @param tab Array of strings to print (must be NULL-terminated)
 * @param sep String to print between elements
 * @param fd File descriptor to print to
 * @return Total number of characters printed, or -1 if tab is NULL or
 *         fd is invalid
 */
int	ft_printtab_join_fd(char *tab[], char *sep, int fd)
{
	int	i;
	int	count;

	if (!tab || fd < 0)
		return (-1);
	if (!sep)
		sep = "";
	i = 0;
	count = 0;
	while (tab[i])
	{
		count += ft_printstr_fd(tab[i++], fd);
		if (tab[i])
			count += ft_printstr_fd(sep, fd);
	}
	return (count);
}
