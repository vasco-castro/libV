/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:32:18 by vsoares-          #+#    #+#             */
/*   Updated: 2026/05/02 21:53:22 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/string.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s && s[i] && f)
	{
		f(i, &s[i]);
		i++;
	}
}
