/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 18:16:00 by vsoares-          #+#    #+#             */
/*   Updated: 2026/04/15 00:00:00 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * @brief Converts the initial portion of the string pointed to by 'str' to
 * an int.
 *
 * This function skips leading whitespace, handles optional '+' or '-' signs,
 * and converts the subsequent numeric characters into an integer value.
 * Overflow behavior follows standard-like atoi behavior (not guarded).
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
	if (!str)
		return (0);
	while (ft_isspace(str[i]))
		i++;
	if (ft_issign(str[i]) != 0)
		sign *= ft_issign(str[i++]);
	while (ft_isdigit(str[i]))
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(nb * sign));
}

/**
 * @brief Helper function to check for overflow during conversion.
 *
 * @param nb The current numeric value being built.
 * @param sign The sign of the number (1 for positive, -1 for negative).
 * @return true if overflow is detected, false otherwise.
 */
bool	ft_is_overflowed(unsigned long nb, int sign)
{
	if (sign == 1 && nb > INT_MAX)
		return (true);
	if (sign == -1 && nb > (unsigned long)INT_MAX + 1)
		return (true);
	return (false);
}

/**
 * @brief Converts string to int with overflow detection.
 *
 * If overflow is detected during conversion, sets *overflowed to 1.
 * Otherwise sets *overflowed to 0.
 *
 * @param str The string to convert.
 * @param overflowed Output flag (0 = no overflow, 1 = overflow).
 * @return The converted integer value (cast result), even on overflow.
 */
int	ft_safe_atoi(const char *str, bool *overflowed)
{
	size_t			i;
	unsigned long	nb;
	int				sign;

	i = 0;
	sign = 1;
	nb = 0;
	if (overflowed)
		*overflowed = false;
	if (!str)
		return (0);
	while (ft_isspace(str[i]))
		i++;
	if (ft_issign(str[i]) != 0)
		sign *= ft_issign(str[i++]);
	while (ft_isdigit(str[i]))
	{
		nb = nb * 10 + (str[i] - '0');
		if (overflowed)
			*overflowed = ft_is_overflowed(nb, sign);
		i++;
	}
	return ((int)(nb * sign));
}
