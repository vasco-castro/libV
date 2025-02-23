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

#include "../libft.h"

static int	isspace(int c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

static int	issignal(int c)
{
	if (c == '+')
		return (1);
	else if (c == '-')
		return (-1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	size_t			i;
	unsigned long	nb;
	int				signal;

	i = 0;
	signal = 1;
	nb = 0;
	while (isspace(str[i]))
		i++;
	if (issignal(str[i]) != 0)
		signal *= issignal(str[i++]);
	while (ft_isdigit(str[i]) && nb <= INT_MAX)
	{
		nb *= 10;
		nb += str[i] - '0';
		i++;
	}
	return (nb * signal);
}
