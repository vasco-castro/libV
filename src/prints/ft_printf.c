/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 18:48:01 by vsoares-          #+#    #+#             */
/*   Updated: 2025/03/06 17:21:58 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/prints.h"

static int	printer(char format, va_list *ap, int fd)
{
	int	len;

	len = 0;
	if (format == F_CHAR)
		len = ft_printchar_fd(va_arg(*ap, int), fd);
	else if (format == F_STRING)
		len = ft_printstr_fd(va_arg(*ap, char *), fd);
	else if (format == F_STRING_TAB)
		len = ft_printtab_fd(va_arg(*ap, char **), fd);
	else if (format == F_BOOL)
		len = ft_printbool_fd(va_arg(*ap, int), fd);
	else if (format == F_POINTER)
		len = ft_printptr_fd(va_arg(*ap, void *), fd);
	else if (format == F_DIGIT || format == F_INTEGER)
		len = ft_printbase_fd((long)va_arg(*ap, int), BASE_10, fd);
	else if (format == F_UNSIGNED)
		len = ft_printbase_fd(va_arg(*ap, unsigned int), BASE_10, fd);
	else if (format == F_HEXA)
		len = ft_printubase_fd((long)va_arg(*ap, unsigned int), BASE_16, fd);
	else if (format == F_HEXA_UP)
		len = ft_printubase_fd((long)va_arg(*ap, unsigned int), BASE_16_UP, fd);
	else if (format == FORMATTER)
		len = ft_printchar_fd(format, fd);
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		len;
	int		i;

	if (!str)
		return (-1);
	i = 0;
	len = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == FORMATTER)
			len += printer(str[++i], &ap, 1);
		else
			len += ft_printchar(str[i]);
		i++;
	}
	va_end(ap);
	return (len);
}

int	ft_printf_fd(const char *str, int fd, ...)
{
	va_list	ap;
	int		len;
	int		i;

	if (!str)
		return (-1);
	i = 0;
	len = 0;
	va_start(ap, fd);
	while (str[i])
	{
		if (str[i] == FORMATTER)
			len += printer(str[++i], &ap, fd);
		else
			len += ft_printchar_fd(str[i], fd);
		i++;
	}
	va_end(ap);
	return (len);
}
