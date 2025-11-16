/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ctype_checks.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 17:53:00 by vsoares-          #+#    #+#             */
/*   Updated: 2025/11/16 17:53:00 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int	test_ft_isalpha(void)
{
	if (!ft_isalpha('a') || !ft_isalpha('Z'))
		return (TEST_FAIL);
	if (ft_isalpha('1') || ft_isalpha(' '))
		return (TEST_FAIL);
	return (TEST_PASS);
}

int	test_ft_isdigit(void)
{
	if (!ft_isdigit('0') || !ft_isdigit('9'))
		return (TEST_FAIL);
	if (ft_isdigit('a') || ft_isdigit(' '))
		return (TEST_FAIL);
	return (TEST_PASS);
}

int	test_ft_isalnum(void)
{
	if (!ft_isalnum('a') || !ft_isalnum('9'))
		return (TEST_FAIL);
	if (ft_isalnum(' ') || ft_isalnum('!'))
		return (TEST_FAIL);
	return (TEST_PASS);
}

int	test_ft_isascii(void)
{
	if (!ft_isascii(0) || !ft_isascii(127))
		return (TEST_FAIL);
	if (ft_isascii(128) || ft_isascii(-1))
		return (TEST_FAIL);
	return (TEST_PASS);
}

int	test_ft_isprint(void)
{
	if (!ft_isprint(' ') || !ft_isprint('~'))
		return (TEST_FAIL);
	if (ft_isprint('\n') || ft_isprint(127))
		return (TEST_FAIL);
	return (TEST_PASS);
}
