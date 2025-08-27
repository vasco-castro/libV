/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 14:20:09 by vsoares-          #+#    #+#             */
/*   Updated: 2025/03/05 14:20:09 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * @brief Converts the initial portion of the string pointed to by 'str' to a
 * 		  long int.
 *
 * This function skips leading whitespace, handles optional '+' or '-' signs,
 * and converts the subsequent numeric characters into a long integer value.
 *
 * @param str The string to convert.
 * @return The long integer value represented by the string.
 */
long	ft_atol(const char *str)
{
	size_t				i;
	unsigned long long	nb;
	int					sign;

	i = 0;
	sign = 1;
	nb = 0;
	while (ft_isspace(str[i]))
		i++;
	if (ft_issign(str[i]) != 0)
	{
		sign *= ft_issign(str[i]);
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return ((long)(nb * sign));
}
