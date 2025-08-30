/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printtab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:25:41 by vsoares-          #+#    #+#             */
/*   Updated: 2025/08/30 15:49:04 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/prints.h"

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
