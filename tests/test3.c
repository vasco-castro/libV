/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 21:03:53 by vsoares-          #+#    #+#             */
/*   Updated: 2025/11/16 17:35:51 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_3(void)
{
	ft_printf("DEBUG MODE: %b\n", debug_mode());
	debug("DEBUG MODE: %b\n", debug_mode());
	change_debug_mode(true);
	ft_printf("DEBUG MODE: %b\n", debug_mode());
	debug("DEBUG MODE: %b\n", debug_mode());
}
