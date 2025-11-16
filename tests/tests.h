/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 17:53:00 by vsoares-          #+#    #+#             */
/*   Updated: 2025/11/16 17:53:00 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

# include "../include/libft.h"

# define TEST_PASS 1
# define TEST_FAIL 0

void	test_memory(void);
void	test_strings(void);
void	test_converts(void);
void	test_ctype(void);
void	test_lists(void);
void	test_prints(void);
void	test_files(void);
void	test_debug(void);

void	print_test_header(const char *test_name);
void	print_test_result(const char *test_name, int result);

#endif
