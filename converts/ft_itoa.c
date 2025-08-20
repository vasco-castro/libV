/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 18:16:02 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/23 16:33:56 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * @brief Calculates the number of digits in a number.
 * @param nb The number to evaluate.
 * @return The size of the number including sign if negative.
 */
static int	nbrsize(long nb)
{
	size_t	count;

	count = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb *= -1;
		count++;
	}
	while (nb > 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

/**
 * @brief Converts an integer to a string.
 * @param n The integer to convert.
 * @return The allocated string representing the integer,
 *         or NULL if memory allocation fails.
 */
char	*ft_itoa(int n)
{
	char	*number;
	long	nb;
	size_t	nlen;

	nb = n;
	nlen = nbrsize(nb);
	number = ft_calloc(nlen + 1, 1);
	if (!number)
		return (NULL);
	if (nb == 0)
		number[0] = '0';
	if (nb < 0)
	{
		number[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		number[--nlen] = nb % 10 + '0';
		nb /= 10;
	}
	return (number);
}
