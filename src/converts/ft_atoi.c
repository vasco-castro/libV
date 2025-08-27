/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 18:16:00 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/23 16:33:56 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * @brief Converts the initial portion of the string pointed to by 'str' to
 * 		  an int.
 *
 * This function skips leading whitespace, handles optional '+' or '-' signs,
 * and converts the subsequent numeric characters into an integer value.
 *
 * @param str The string to convert.
 * @return The integer value represented by the string.
 */
int	ft_atoi(const char *str)
{
	size_t			i;
	unsigned long	nb;
	int				sign;

	i = 0;
	sign = 1;
	nb = 0;
	while (ft_isspace(str[i]))
		i++;
	if (ft_issign(str[i]) != 0)
		sign *= ft_issign(str[i++]);
	while (ft_isdigit(str[i]) && nb <= INT_MAX)
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb * sign);
}
