/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 18:22:58 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/23 17:46:11 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/string.h"

/* Return the total length of a string passed as 's' */
size_t ft_strlen(const char *s)
{
	size_t len;

	len = 0;
	while (s && s[len])
		len++;
	return (len);
}
