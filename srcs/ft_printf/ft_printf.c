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
 * @brief Select and perform a single conversion from a format string.
 *
 * Reads the next argument(s) from the provided `va_list` pointer using
 * `va_arg` according to `format`, formats the value and writes it to
 * the given file descriptor.
 *
 * @param format Conversion specifier character (e.g. 'd', 's', 'p').
 * @param ap Pointer to a `va_list` that will be advanced by this function.
 *           The caller may provide a copy (via `va_copy`) to avoid
 *           corrupting the caller's original `va_list`.
 * @param fd File descriptor to write output to (e.g. `STDOUT_FILENO`).
 * @return Number of characters written for this conversion, or 0 if the
 *         specifier is unknown.
 */
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

/**
 * @brief Print formatted output to standard output.
 *
 * This function parses `str` and consumes the trailing variable
 * arguments, formatting them according to the conversion specifiers in
 * `str`. It returns the total number of characters printed. If `str` is
 * NULL the function returns -1 and does not attempt to read varargs.
 *
 * @param str Null-terminated format string containing conversion specifiers.
 * @param ... Variable arguments matching the conversion specifiers.
 * @return Total number of characters printed, or -1 if `str` is NULL.
 */
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
			len += printer(str[++i], &ap, STDOUT_FILENO);
		else
			len += ft_printchar(str[i]);
		i++;
	}
	va_end(ap);
	return (len);
}

/**
 * @brief Print formatted output to a file descriptor.
 *
 * Works like `ft_printf` but writes to the provided file descriptor `fd`.
 * If `str` is NULL the function returns -1 and does not read any
 * variable arguments.
 *
 * @param fd File descriptor to write output to.
 * @param str Null-terminated format string containing conversion specifiers.
 * @param ... Variable arguments matching the conversion specifiers.
 * @return Total number of characters printed, or -1 if `str` is NULL.
 */
int	ft_dprintf(int fd, const char *str, ...)
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
			len += printer(str[++i], &ap, fd);
		else
			len += ft_printchar_fd(str[i], fd);
		i++;
	}
	va_end(ap);
	return (len);
}

	/**
	 * @brief Variant of `ft_printf` that accepts a `va_list`.
	 *
	 * This function copies the provided `va_list` with `va_copy` to avoid
	 * modifying the caller's list and passes the copy to the internal
	 * `printer` helper which expects a `va_list *`.
	 *
	 * @param str Format string containing conversion specifiers.
	 * @param ap   `va_list` provided by the caller (not modified).
	 * @return the number of characters printed, or -1 on error.
	 */
int	ft_vprintf(const char *str, va_list args)
{
	va_list	ap;
	int		len;
	int		i;

	if (!str)
		return (-1);
	i = 0;
	len = 0;
	va_copy(ap, args);
	while (str[i])
	{
		if (str[i] == FORMATTER)
			len += printer(str[++i], &ap, STDOUT_FILENO);
		else
			len += ft_printchar(str[i]);
		i++;
	}
	va_end(ap);
	return (len);
}

	/**
	 * @brief Variant of `ft_dprintf` that accepts a `va_list`.
	 *
	 * This function copies the provided `va_list` with `va_copy` to avoid
	 * modifying the caller's list and passes the copy to the internal
	 * `printer` helper which expects a `va_list *`.
	 *
	 * @param fd   File descriptor to print to.
	 * @param str  Format string containing conversion specifiers.
	 * @param ap   `va_list` provided by the caller (not modified).
	 * @return the number of characters printed, or -1 on error.
	 */
int	ft_vdprintf(int fd, const char *str, va_list args)
{
	va_list	ap;
	int		len;
	int		i;

	if (!str)
		return (-1);
	i = 0;
	len = 0;
	va_copy(ap, args);
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
