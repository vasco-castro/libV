/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strings_basic.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 17:53:00 by vsoares-          #+#    #+#             */
/*   Updated: 2025/11/16 17:53:00 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int	test_ft_strlen(void)
{
	if (ft_strlen("Hello") != 5)
		return (TEST_FAIL);
	if (ft_strlen("") != 0)
		return (TEST_FAIL);
	return (TEST_PASS);
}

int	test_ft_strchr(void)
{
	char	*str;
	char	*result;

	str = "Hello World";
	result = ft_strchr(str, 'W');
	if (result != str + 6)
		return (TEST_FAIL);
	result = ft_strchr(str, 'Z');
	if (result != NULL)
		return (TEST_FAIL);
	return (TEST_PASS);
}

int	test_ft_strrchr(void)
{
	char	*str;
	char	*result;

	str = "Hello World";
	result = ft_strrchr(str, 'o');
	if (result != str + 7)
		return (TEST_FAIL);
	return (TEST_PASS);
}

int	test_ft_strncmp(void)
{
	if (ft_strncmp("Hello", "Hello", 5) != 0)
		return (TEST_FAIL);
	if (ft_strncmp("Hello", "World", 5) >= 0)
		return (TEST_FAIL);
	if (ft_strncmp("World", "Hello", 5) <= 0)
		return (TEST_FAIL);
	return (TEST_PASS);
}

int	test_ft_strcmp(void)
{
	if (ft_strcmp("Hello", "Hello") != 0)
		return (TEST_FAIL);
	if (ft_strcmp("Hello", "World") >= 0)
		return (TEST_FAIL);
	if (ft_strcmp("World", "Hello") <= 0)
		return (TEST_FAIL);
	return (TEST_PASS);
}
