/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 17:24:58 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/23 17:52:12 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/string.h"

void *ft_tabdel(char **tab, size_t len)
{
	while (len)
		free(tab[len--]);
	free(tab[len]);
	free(tab);
	return (NULL);
}
