/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 21:03:53 by vsoares-          #+#    #+#             */
/*   Updated: 2025/11/16 20:26:11 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test3(int argc, char *argv[])
{
	ft_printf("ORIGINAL ARGS(%d):\n%t\n", argc, argv);
	parse_debug_mode(&argc, argv);
	ft_printf("DEBUGUED ARGS(%d):\n%t\n", argc, argv);
	ft_printf("DEBUF MODE: %b\n", debug_mode());
	debug("DEBUG MODE: %b\n", debug_mode());
}
