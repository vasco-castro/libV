/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 15:05:56 by vsoares-          #+#    #+#             */
/*   Updated: 2025/11/16 17:53:00 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
** This file is kept for backwards compatibility.
** The old confusing tests have been removed.
**
** For comprehensive unit tests, please use:
**   make test
** or
**   make t
**
** Tests are located in the /tests directory and are organized by module.
** See tests/README.md for more information.
*/

int	main(void)
{
	ft_printf(BIGREEN "LibV - Custom C Library\n" RESET);
	ft_printf("To run tests: " BICYAN "make test" RESET " or " BICYAN);
	ft_printf("make t\n" RESET);
	ft_printf("See tests/README.md for more information.\n");
	return (EXIT_SUCCESS);
}
