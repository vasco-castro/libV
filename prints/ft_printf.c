/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 18:48:01 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/23 16:33:56 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/memory.h"

static int	printer(char format, va_list ap)
{
	int	counter;

	counter = 0;
	if (format == 'c')
		counter = ft_printchar(va_arg(ap, int));
	else if (format == 's')
		counter = ft_printstr(va_arg(ap, char *));
	else if (format == 'p')
		counter = ft_print_ptr(va_arg(ap, void *));
	else if (format == 'd' || format == 'i')
		counter = ft_printbase((long)va_arg(ap, int), DECIMAL);
	else if (format == 'u')
		counter = ft_printbase(va_arg(ap, unsigned int), DECIMAL);
	else if (format == 'x')
		counter = ft_printubase((long)va_arg(ap, unsigned int), HEXA_LOW);
	else if (format == 'X')
		counter = ft_printubase((long)va_arg(ap, unsigned int), HEXA_UP);
	else if (format == '%')
		counter = ft_printchar(format);
	return (counter);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		counter;
	int		i;

	if (!str)
		return (-1);
	i = 0;
	counter = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
			counter += printer(str[++i], ap);
		else
			counter += ft_printchar(str[i]);
		i++;
	}
	va_end(ap);
	return (counter);
}
