/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 18:22:58 by vsoares-          #+#    #+#             */
/*   Updated: 2024/12/31 17:47:01 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libV.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	if (!s)
		return (NULL);
	while (s[len])
		len++;
	return (len);
}
