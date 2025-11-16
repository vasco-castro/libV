/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strings.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 17:53:00 by vsoares-          #+#    #+#             */
/*   Updated: 2025/11/16 17:53:00 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int	test_ft_strlen(void);
int	test_ft_strchr(void);
int	test_ft_strrchr(void);
int	test_ft_strncmp(void);
int	test_ft_strcmp(void);
int	test_ft_strnstr(void);
int	test_ft_strdup(void);
int	test_ft_substr(void);
int	test_ft_strjoin(void);
int	test_ft_strtrim(void);
int	test_ft_split(void);

void	test_strings(void)
{
	print_test_header("STRING TESTS");
	print_test_result("ft_strlen", test_ft_strlen());
	print_test_result("ft_strchr", test_ft_strchr());
	print_test_result("ft_strrchr", test_ft_strrchr());
	print_test_result("ft_strncmp", test_ft_strncmp());
	print_test_result("ft_strcmp", test_ft_strcmp());
	print_test_result("ft_strnstr", test_ft_strnstr());
	print_test_result("ft_strdup", test_ft_strdup());
	print_test_result("ft_substr", test_ft_substr());
	print_test_result("ft_strjoin", test_ft_strjoin());
	print_test_result("ft_strtrim", test_ft_strtrim());
	print_test_result("ft_split", test_ft_split());
}
