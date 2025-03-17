/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printtab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:25:41 by vsoares-          #+#    #+#             */
/*   Updated: 2025/03/06 17:16:45 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/prints.h"

int	ft_printtab(char *tab[])
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (tab[i])
		count += ft_println(tab[i++]);
	return (count);
}

int	ft_printtab_fd(char *tab[], int fd)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (tab[i])
		count += ft_println_fd(tab[i++], fd);
	return (count);
}
