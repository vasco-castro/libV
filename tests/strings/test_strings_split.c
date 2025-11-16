/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strings_split.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 17:53:00 by vsoares-          #+#    #+#             */
/*   Updated: 2025/11/16 17:53:00 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int	test_ft_split(void)
{
	char	**split;

	split = ft_split("Hello World Test", ' ');
	if (!split || ft_strcmp(split[0], "Hello") != 0)
	{
		ft_tabfree(split);
		return (TEST_FAIL);
	}
	if (ft_strcmp(split[1], "World") != 0 || ft_strcmp(split[2], "Test") != 0)
	{
		ft_tabfree(split);
		return (TEST_FAIL);
	}
	ft_tabfree(split);
	return (TEST_PASS);
}
