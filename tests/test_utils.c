/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 17:53:00 by vsoares-          #+#    #+#             */
/*   Updated: 2025/11/16 17:53:00 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	print_test_header(const char *test_name)
{
	ft_printf("\n");
	ft_printf(BICYAN "========================================\n" RESET);
	ft_printf(BICYAN "  %s\n" RESET, test_name);
	ft_printf(BICYAN "========================================\n" RESET);
}

void	print_test_result(const char *test_name, int result)
{
	if (result == TEST_PASS)
		ft_printf(BIGREEN "[PASS]" RESET " %s\n", test_name);
	else
		ft_printf(BIRED "[FAIL]" RESET " %s\n", test_name);
}
