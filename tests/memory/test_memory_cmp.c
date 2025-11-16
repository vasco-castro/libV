/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memory_cmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 17:53:00 by vsoares-          #+#    #+#             */
/*   Updated: 2025/11/16 17:53:00 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int	test_ft_memchr(void)
{
	char	str[20];
	char	*result;
	int		i;

	i = 0;
	while (i < 12)
	{
		str[i] = "Hello World"[i];
		i++;
	}
	result = ft_memchr(str, 'W', 11);
	if (result != str + 6)
		return (TEST_FAIL);
	result = ft_memchr(str, 'Z', 11);
	if (result != NULL)
		return (TEST_FAIL);
	return (TEST_PASS);
}

int	test_ft_memcmp(void)
{
	if (ft_memcmp("Hello", "Hello", 5) != 0)
		return (TEST_FAIL);
	if (ft_memcmp("Hello", "World", 5) >= 0)
		return (TEST_FAIL);
	if (ft_memcmp("World", "Hello", 5) <= 0)
		return (TEST_FAIL);
	return (TEST_PASS);
}

int	test_ft_calloc(void)
{
	char	*ptr;
	int		i;

	ptr = ft_calloc(10, sizeof(char));
	if (!ptr)
		return (TEST_FAIL);
	i = 0;
	while (i < 10)
	{
		if (ptr[i] != '\0')
		{
			free(ptr);
			return (TEST_FAIL);
		}
		i++;
	}
	free(ptr);
	return (TEST_PASS);
}
