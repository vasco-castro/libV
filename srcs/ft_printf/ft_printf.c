/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 18:48:01 by vsoares-          #+#    #+#             */
/*   Updated: 2026/05/04 01:09:10 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * @brief Dispatch a single printf conversion specifier.
 *
 * Reads one argument from @p ap according to @p format, formats it, and
 * writes the result to @p fd.
 *
 * @param format  Conversion specifier character ('c', 's', 'd', …).
 * @param ap      Caller-provided va_list; advanced in place.
 * @param fd      File descriptor to write to.
 * @return Number of bytes written, or 0 for an unrecognised specifier.
 *
 * @note Unknown specifiers are silently ignored (0 bytes written).
 */
static int	printer(char format, va_list ap, int fd)
{
	if (format == F_CHAR)
		return (ft_printchar_fd(va_arg(ap, int), fd));
	if (format == F_STRING)
		return (ft_printstr_fd(va_arg(ap, char *), fd));
	if (format == F_STRING_TAB)
		return (ft_printtab_fd(va_arg(ap, char **), fd));
	if (format == F_BOOL)
		return (ft_printbool_fd(va_arg(ap, int), fd));
	if (format == F_POINTER)
		return (ft_printptr_fd(va_arg(ap, void *), fd));
	if (format == F_DIGIT || format == F_INTEGER)
		return (ft_printbase_fd((long)va_arg(ap, int), BASE_10, fd));
	if (format == F_UNSIGNED)
		return (ft_printbase_fd(va_arg(ap, unsigned int), BASE_10, fd));
	if (format == F_HEXA)
		return (ft_printubase_fd(va_arg(ap, unsigned int), BASE_16, fd));
	if (format == F_HEXA_UP)
		return (ft_printubase_fd(va_arg(ap, unsigned int), BASE_16_UP, fd));
	if (format == FORMATTER)
		return (ft_printchar_fd(format, fd));
	return (0);
}

/**
 * @brief Formatted print to stdout from a va_list.
 *
 * @param format  Null-terminated format string.
 * @param ap      Argument list; not consumed — caller must call va_end.
 * @return Total bytes written, or -1 if @p format is NULL.
 */
int	ft_vprintf(const char *format, va_list ap)
{
	return (ft_vdprintf(STDOUT_FILENO, format, ap));
}

/**
 * @brief Formatted print to a file descriptor from a va_list.
 *
 * @param fd      Destination file descriptor.
 * @param format  Null-terminated format string.
 * @param ap      Argument list; not consumed — caller must call va_end.
 * @return Total bytes written, or -1 if @p format is NULL.
 */
int	ft_vdprintf(int fd, const char *format, va_list ap)
{
	va_list	args;
	int		len;

	if (!format)
		return (-1);
	len = 0;
	va_copy(args, ap);
	while (*format)
	{
		if (*format == FORMATTER)
			len += printer(*++format, args, fd);
		else
			len += ft_printchar_fd(*format, fd);
		format++;
	}
	va_end(args);
	return (len);
}

/**
 * @brief Formatted print to stdout.
 *
 * @param format  Null-terminated format string.
 * @param ...     Arguments matching the conversion specifiers in @p format.
 * @return Total bytes written, or -1 if @p format is NULL.
 */
int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		len;

	if (!format)
		return (-1);
	va_start(ap, format);
	len = ft_vprintf(format, ap);
	va_end(ap);
	return (len);
}

/**
 * @brief Formatted print to a file descriptor.
 *
 * @param fd      Destination file descriptor.
 * @param format  Null-terminated format string.
 * @param ...     Arguments matching the conversion specifiers in @p format.
 * @return Total bytes written, or -1 if @p format is NULL.
 */
int	ft_dprintf(int fd, const char *format, ...)
{
	va_list	ap;
	int		len;

	if (!format)
		return (-1);
	va_start(ap, format);
	len = ft_vdprintf(fd, format, ap);
	va_end(ap);
	return (len);
}
