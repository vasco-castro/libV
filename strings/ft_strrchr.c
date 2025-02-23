/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 19:17:19 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/23 17:31:10 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			chr;
	char			*rchr;

	i = 0;
	chr = (char) c;
	rchr = NULL;
	while (s[i])
	{
		if (s[i] == chr)
			rchr = ((char *) &s[i]);
		i++;
	}
	if (s[i] == chr)
		rchr = ((char *) &s[i]);
	return (rchr);
}
