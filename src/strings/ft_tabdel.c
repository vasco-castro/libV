/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 17:24:58 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/28 21:31:35 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/string.h"

/**
 * Frees all elements of a string tab, and the tab itself.
 */
void	*ft_tabdel(char **tab, size_t len)
{
	while (len)
		free(tab[len--]);
	free(tab[len]);
	free(tab);
	return (NULL);
}
