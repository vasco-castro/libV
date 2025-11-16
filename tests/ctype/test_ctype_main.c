/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ctype_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 17:53:00 by vsoares-          #+#    #+#             */
/*   Updated: 2025/11/16 17:53:00 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int	test_ft_isalpha(void);
int	test_ft_isdigit(void);
int	test_ft_isalnum(void);
int	test_ft_isascii(void);
int	test_ft_isprint(void);
int	test_ft_isupper(void);
int	test_ft_islower(void);
int	test_ft_issign(void);

void	test_ctype(void)
{
	print_test_header("CTYPE TESTS");
	print_test_result("ft_isalpha", test_ft_isalpha());
	print_test_result("ft_isdigit", test_ft_isdigit());
	print_test_result("ft_isalnum", test_ft_isalnum());
	print_test_result("ft_isascii", test_ft_isascii());
	print_test_result("ft_isprint", test_ft_isprint());
	print_test_result("ft_isupper", test_ft_isupper());
	print_test_result("ft_islower", test_ft_islower());
	print_test_result("ft_issign", test_ft_issign());
}
