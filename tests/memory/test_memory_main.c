/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memory_main.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 17:53:00 by vsoares-          #+#    #+#             */
/*   Updated: 2025/11/16 17:53:00 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int	test_ft_memset(void);
int	test_ft_bzero(void);
int	test_ft_memcpy(void);
int	test_ft_memmove(void);
int	test_ft_memchr(void);
int	test_ft_memcmp(void);
int	test_ft_calloc(void);

void	test_memory(void)
{
	print_test_header("MEMORY TESTS");
	print_test_result("ft_memset", test_ft_memset());
	print_test_result("ft_bzero", test_ft_bzero());
	print_test_result("ft_memcpy", test_ft_memcpy());
	print_test_result("ft_memmove", test_ft_memmove());
	print_test_result("ft_memchr", test_ft_memchr());
	print_test_result("ft_memcmp", test_ft_memcmp());
	print_test_result("ft_calloc", test_ft_calloc());
}
