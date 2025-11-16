/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_files.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 17:53:00 by vsoares-          #+#    #+#             */
/*   Updated: 2025/11/16 17:53:00 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

static int	test_ft_isfile(void)
{
	if (!ft_isfile("test.txt", ".txt"))
		return (TEST_FAIL);
	if (ft_isfile("test.txt", ".c"))
		return (TEST_FAIL);
	if (!ft_isfile("Makefile.mk", ".mk"))
		return (TEST_FAIL);
	return (TEST_PASS);
}

void	test_files(void)
{
	print_test_header("FILE TESTS");
	print_test_result("ft_isfile", test_ft_isfile());
}
