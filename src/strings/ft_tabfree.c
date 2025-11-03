/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 20:55:45 by vsoares-          #+#    #+#             */
/*   Updated: 2025/11/03 20:56:02 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/string.h"

void	ft_tabfree(char **tab)
{
	size_t	len;

	if (!tab)
		return ;
	len = 0;
	while (tab[len])
		free(tab[len++]);
	free(tab);
}
