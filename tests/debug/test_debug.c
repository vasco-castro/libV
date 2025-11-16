/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_debug.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 17:53:00 by vsoares-          #+#    #+#             */
/*   Updated: 2025/11/16 17:53:00 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

static int	test_debug_mode(void)
{
	bool	original;
	bool	changed;

	original = debug_mode();
	changed = change_debug_mode(!original);
	if (changed != !original)
		return (TEST_FAIL);
	if (debug_mode() != !original)
		return (TEST_FAIL);
	change_debug_mode(original);
	return (TEST_PASS);
}

void	test_debug(void)
{
	print_test_header("DEBUG TESTS");
	print_test_result("debug_mode", test_debug_mode());
}
