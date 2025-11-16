/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strings_manip.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 17:53:00 by vsoares-          #+#    #+#             */
/*   Updated: 2025/11/16 17:53:00 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int	test_ft_strnstr(void)
{
	char	*result;

	result = ft_strnstr("Hello World", "World", 11);
	if (ft_strcmp(result, "World") != 0)
		return (TEST_FAIL);
	result = ft_strnstr("Hello World", "World", 7);
	if (result != NULL)
		return (TEST_FAIL);
	return (TEST_PASS);
}

int	test_ft_strdup(void)
{
	char	*dup;

	dup = ft_strdup("Hello");
	if (!dup || ft_strcmp(dup, "Hello") != 0)
	{
		free(dup);
		return (TEST_FAIL);
	}
	free(dup);
	return (TEST_PASS);
}

int	test_ft_substr(void)
{
	char	*sub;

	sub = ft_substr("Hello World", 6, 5);
	if (!sub || ft_strcmp(sub, "World") != 0)
	{
		free(sub);
		return (TEST_FAIL);
	}
	free(sub);
	return (TEST_PASS);
}

int	test_ft_strjoin(void)
{
	char	*join;

	join = ft_strjoin("Hello", " World");
	if (!join || ft_strcmp(join, "Hello World") != 0)
	{
		free(join);
		return (TEST_FAIL);
	}
	free(join);
	return (TEST_PASS);
}

int	test_ft_strtrim(void)
{
	char	*trim;

	trim = ft_strtrim("  Hello  ", " ");
	if (!trim || ft_strcmp(trim, "Hello") != 0)
	{
		free(trim);
		return (TEST_FAIL);
	}
	free(trim);
	return (TEST_PASS);
}
