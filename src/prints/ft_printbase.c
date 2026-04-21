/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printbase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 18:07:20 by vsoares-          #+#    #+#             */
/*   Updated: 2025/03/06 17:17:55 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/prints.h"
#include "../../include/string.h"

/**
 * @brief Prints a signed long integer in the given base to stdout.
 *
 * Recursively prints each digit of n using the characters in base.
 * Prints a '-' sign for negative numbers.
 *
 * @param n The signed long integer to print.
 * @param base A string representing the base characters (e.g., "0123456789").
 * @return The number of characters printed.
 */
int	ft_printbase(long n, const char *base)
{
	static unsigned short	base_size;

	base_size = ft_strlen(base);
	if (n < 0)
		return (ft_printchar('-') + ft_printbase(-n, base));
	else if (n < base_size)
		return (ft_printchar(base[n]));
	else
		return (ft_printbase(n / base_size, base)
			+ ft_printbase(n % base_size, base));
}

/**
 * @brief Prints an unsigned long integer in the given base to stdout.
 *
 * Recursively prints each digit of n using the characters in base.
 *
 * @param n The unsigned long integer to print.
 * @param base A string representing the base characters (e.g., "0123456789abcdef").
 * @return The number of characters printed.
 */
int	ft_printubase(unsigned long n, const char *base)
{
	static unsigned short	base_size;

	base_size = ft_strlen(base);
	if (n < base_size)
		return (ft_printchar(base[n]));
	else
		return (ft_printubase(n / base_size, base)
			+ ft_printubase(n % base_size, base));
}

/**
 * @brief Prints a signed long integer in the given base to a file descriptor.
 *
 * Recursively prints each digit of n using the characters in base.
 * Prints a '-' sign for negative numbers.
 *
 * @param n The signed long integer to print.
 * @param base A string representing the base characters.
 * @param fd The file descriptor to print to.
 * @return The number of characters printed.
 */
int	ft_printbase_fd(long n, const char *base, int fd)
{
	static int	base_size;

	base_size = ft_strlen(base);
	if (n < 0)
		return (ft_printchar_fd('-', fd) + ft_printbase_fd(-n, base, fd));
	else if (n < base_size)
		return (ft_printchar_fd(base[n], fd));
	else
		return (ft_printbase_fd(n / base_size, base, fd)
			+ ft_printbase_fd(n % base_size, base, fd));
}

/**
 * @brief Prints an unsigned long integer in the given base to a file descriptor.
 *
 * Recursively prints each digit of n using the characters in base.
 *
 * @param n The unsigned long integer to print.
 * @param base A string representing the base characters.
 * @param fd The file descriptor to print to.
 * @return The number of characters printed.
 */
int	ft_printubase_fd(unsigned long n, const char *base, int fd)
{
	static unsigned short	base_size;

	base_size = ft_strlen(base);
	if (n < base_size)
		return (ft_printchar_fd(base[n], fd));
	else
		return (ft_printubase_fd(n / base_size, base, fd)
			+ ft_printubase_fd(n % base_size, base, fd));
}
