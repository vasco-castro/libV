/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_prints.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 17:53:00 by vsoares-          #+#    #+#             */
/*   Updated: 2025/11/16 17:53:00 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

static int	test_ft_printchar(void)
{
	int	ret;

	ret = ft_printchar('A');
	ft_printchar('\n');
	if (ret != 1)
		return (TEST_FAIL);
	return (TEST_PASS);
}

static int	test_ft_printstr(void)
{
	int	ret;

	ret = ft_printstr("Hello");
	ft_printchar('\n');
	if (ret != 5)
		return (TEST_FAIL);
	return (TEST_PASS);
}

static int	test_ft_printf(void)
{
	int	ret;

	ret = ft_printf("Test: %s %d\n", "Hello", 42);
	if (ret < 0)
		return (TEST_FAIL);
	return (TEST_PASS);
}

static int	test_ft_printbool(void)
{
	int	ret;

	ret = ft_printbool(true);
	ft_printchar(' ');
	ret += ft_printbool(false);
	ft_printchar('\n');
	if (ret < 0)
		return (TEST_FAIL);
	return (TEST_PASS);
}

void	test_prints(void)
{
	print_test_header("PRINT TESTS");
	print_test_result("ft_printchar", test_ft_printchar());
	print_test_result("ft_printstr", test_ft_printstr());
	print_test_result("ft_printf", test_ft_printf());
	print_test_result("ft_printbool", test_ft_printbool());
}
