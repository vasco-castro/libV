/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ctype_case.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 17:53:00 by vsoares-          #+#    #+#             */
/*   Updated: 2025/11/16 17:53:00 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int	test_ft_isupper(void)
{
	if (!ft_isupper('A') || !ft_isupper('Z'))
		return (TEST_FAIL);
	if (ft_isupper('a') || ft_isupper('1'))
		return (TEST_FAIL);
	return (TEST_PASS);
}

int	test_ft_islower(void)
{
	if (!ft_islower('a') || !ft_islower('z'))
		return (TEST_FAIL);
	if (ft_islower('A') || ft_islower('1'))
		return (TEST_FAIL);
	return (TEST_PASS);
}

int	test_ft_issign(void)
{
	if (ft_issign('+') != 1 || ft_issign('-') != -1)
		return (TEST_FAIL);
	if (ft_issign('a') != 0 || ft_issign('1') != 0)
		return (TEST_FAIL);
	return (TEST_PASS);
}
