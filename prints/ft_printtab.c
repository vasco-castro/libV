/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printtab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:25:41 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/23 15:25:53 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libV.h"

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