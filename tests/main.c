/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 21:07:35 by vsoares-          #+#    #+#             */
/*   Updated: 2025/11/16 17:44:04 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	main(int argc, char *argv[])
{
	ft_printf("ORIGINAL ARGS(%d):\n%t\n", argc, argv);
	parse_debug_mode(&argc, argv);
	ft_printf("DEBUGUED ARGS(%d):\n%t\n", argc, argv);
	ft_printf("DEBUF MODE: %b\n", debug_mode());
	return (EXIT_SUCCESS);
}
