/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tablen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 17:19:33 by vsoares-          #+#    #+#             */
/*   Updated: 2026/05/02 19:46:05 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/string.h"

size_t	ft_tablen(char **tab)
{
	size_t	len;

	if (!tab)
		return (0);
	len = 0;
	while (tab[len])
		++len;
	return (len);
}
