/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 17:53:00 by vsoares-          #+#    #+#             */
/*   Updated: 2025/11/16 17:53:00 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	main(void)
{
	ft_printf(BIPURPLE "\n");
	ft_printf("╔════════════════════════════════════════╗\n");
	ft_printf("║      LIBFT TEST SUITE - libV           ║\n");
	ft_printf("║      Following 42 Norms                ║\n");
	ft_printf("╚════════════════════════════════════════╝\n");
	ft_printf(RESET "\n");
	test_memory();
	test_strings();
	test_converts();
	test_ctype();
	test_lists();
	test_prints();
	test_files();
	test_debug();
	ft_printf("\n");
	ft_printf(BIPURPLE "========================================\n");
	ft_printf("  ALL TESTS COMPLETED\n");
	ft_printf("========================================\n" RESET);
	ft_printf("\n");
	return (EXIT_SUCCESS);
}
