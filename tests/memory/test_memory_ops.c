/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memory_ops.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 17:53:00 by vsoares-          #+#    #+#             */
/*   Updated: 2025/11/16 17:53:00 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int	test_ft_memset(void)
{
	char	buffer[10];
	char	*result;

	result = ft_memset(buffer, 'A', 5);
	if (result != buffer || buffer[0] != 'A' || buffer[4] != 'A')
		return (TEST_FAIL);
	return (TEST_PASS);
}

int	test_ft_bzero(void)
{
	char	buffer[10];
	int		i;

	ft_memset(buffer, 'A', 10);
	ft_bzero(buffer, 5);
	i = 0;
	while (i < 5)
	{
		if (buffer[i] != '\0')
			return (TEST_FAIL);
		i++;
	}
	return (TEST_PASS);
}

int	test_ft_memcpy(void)
{
	char	src[10];
	char	dst[10];
	char	*result;
	int		i;

	i = 0;
	while (i < 6)
	{
		src[i] = "Hello"[i];
		i++;
	}
	result = ft_memcpy(dst, src, 6);
	if (result != dst || ft_strcmp(dst, "Hello") != 0)
		return (TEST_FAIL);
	return (TEST_PASS);
}

int	test_ft_memmove(void)
{
	char	buffer[20];
	char	*result;
	int		i;

	i = 0;
	while (i < 12)
	{
		buffer[i] = "Hello World"[i];
		i++;
	}
	result = ft_memmove(buffer + 6, buffer, 5);
	if (result != buffer + 6 || ft_strcmp(buffer + 6, "Hello") != 0)
		return (TEST_FAIL);
	return (TEST_PASS);
}
