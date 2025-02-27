/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printbase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 18:07:20 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/23 16:33:56 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/memory.h"

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

int	ft_print_ptr(void *ptr)
{
	int				counter;
	unsigned long	ptr_value;

	if (!ptr)
		return (ft_printstr("(nil)"));
	ptr_value = (unsigned long)ptr;
	counter = ft_printstr("0x");
	counter += ft_printubase(ptr_value, HEXA_LOW);
	return (counter);
}
