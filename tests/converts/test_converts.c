/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_converts.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 17:53:00 by vsoares-          #+#    #+#             */
/*   Updated: 2025/11/16 17:53:00 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

static int	test_ft_atoi(void)
{
	if (ft_atoi("42") != 42)
		return (TEST_FAIL);
	if (ft_atoi("-42") != -42)
		return (TEST_FAIL);
	if (ft_atoi("   123") != 123)
		return (TEST_FAIL);
	if (ft_atoi("0") != 0)
		return (TEST_FAIL);
	return (TEST_PASS);
}

static int	test_ft_itoa(void)
{
	char	*str;

	str = ft_itoa(42);
	if (!str || ft_strcmp(str, "42") != 0)
	{
		free(str);
		return (TEST_FAIL);
	}
	free(str);
	str = ft_itoa(-42);
	if (!str || ft_strcmp(str, "-42") != 0)
	{
		free(str);
		return (TEST_FAIL);
	}
	free(str);
	str = ft_itoa(0);
	if (!str || ft_strcmp(str, "0") != 0)
	{
		free(str);
		return (TEST_FAIL);
	}
	free(str);
	return (TEST_PASS);
}

static int	test_ft_toupper(void)
{
	if (ft_toupper('a') != 'A')
		return (TEST_FAIL);
	if (ft_toupper('z') != 'Z')
		return (TEST_FAIL);
	if (ft_toupper('A') != 'A')
		return (TEST_FAIL);
	if (ft_toupper('1') != '1')
		return (TEST_FAIL);
	return (TEST_PASS);
}

static int	test_ft_tolower(void)
{
	if (ft_tolower('A') != 'a')
		return (TEST_FAIL);
	if (ft_tolower('Z') != 'z')
		return (TEST_FAIL);
	if (ft_tolower('a') != 'a')
		return (TEST_FAIL);
	if (ft_tolower('1') != '1')
		return (TEST_FAIL);
	return (TEST_PASS);
}

void	test_converts(void)
{
	print_test_header("CONVERSION TESTS");
	print_test_result("ft_atoi", test_ft_atoi());
	print_test_result("ft_itoa", test_ft_itoa());
	print_test_result("ft_toupper", test_ft_toupper());
	print_test_result("ft_tolower", test_ft_tolower());
}
