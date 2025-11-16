/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lists_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 17:53:00 by vsoares-          #+#    #+#             */
/*   Updated: 2025/11/16 17:53:00 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int	test_ft_lstnew(void);
int	test_ft_lstadd_front(void);
int	test_ft_lstadd_back(void);
int	test_ft_lstsize(void);

void	test_lists(void)
{
	print_test_header("LIST TESTS");
	print_test_result("ft_lstnew", test_ft_lstnew());
	print_test_result("ft_lstadd_front", test_ft_lstadd_front());
	print_test_result("ft_lstadd_back", test_ft_lstadd_back());
	print_test_result("ft_lstsize", test_ft_lstsize());
}
