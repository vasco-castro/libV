/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 21:17:33 by vsoares-          #+#    #+#             */
/*   Updated: 2025/11/16 20:28:35 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test4(void)
{
	ft_printf("%b\n", ft_isfile("tests/test4.c", ".c"));
	ft_printf("%b\n", ft_isfile("tests/.c", ".c"));
	ft_printf("%b\n", ft_isfile("test.c", ".c"));
	ft_printf("%b\n", ft_isfile(".c", ".c"));
	ft_printf("%b\n", ft_isfile("test", ".c"));
}
