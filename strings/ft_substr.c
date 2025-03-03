/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:20:49 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/28 21:21:54 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/string.h"

/**
 * Returns a allocated sub-string:
 * Starting at the position passed as 'start';
 * Inside the string passed as 's';
 * With the total length passed as 'len';
 */
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	slen;
	char	*sub;

	slen = ft_strlen(s);
	if (start > slen)
		return (ft_strdup(""));
	if (len > slen - start)
		len = slen - start;
	sub = ft_calloc(len + 1, sizeof(char));
	if (!sub)
		return (NULL);
	return (ft_memcpy(sub, s + start, len));
}
