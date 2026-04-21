/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 17:17:57 by vsoares-          #+#    #+#             */
/*   Updated: 2025/03/06 17:20:47 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/prints.h"

/**
 * @brief Prints a pointer address to stdout in hexadecimal format.
 *
 * Prints "(nil)" if ptr is NULL, otherwise prints "0x" followed by the
 * hexadecimal representation of the pointer's address.
 *
 * @param ptr The pointer to print.
 * @return The number of characters printed.
 */
int	ft_printptr(void *ptr)
{
	int				counter;
	unsigned long	ptr_value;

	if (!ptr)
		return (ft_printstr("(nil)"));
	ptr_value = (unsigned long)ptr;
	counter = ft_printstr("0x");
	counter += ft_printubase(ptr_value, BASE_16);
	return (counter);
}

/**
 * @brief Prints a pointer address to a file descriptor in hexadecimal format.
 *
 * Prints "(nil)" if ptr is NULL, otherwise prints "0x" followed by the
 * hexadecimal representation of the pointer's address.
 *
 * @param ptr The pointer to print.
 * @param fd The file descriptor to print to.
 * @return The number of characters printed.
 */
int	ft_printptr_fd(void *ptr, int fd)
{
	int				counter;
	unsigned long	ptr_value;

	if (!ptr)
		return (ft_printstr_fd("(nil)", fd));
	ptr_value = (unsigned long)ptr;
	counter = ft_printstr_fd("0x", fd);
	counter += ft_printubase_fd(ptr_value, BASE_16, fd);
	return (counter);
}
