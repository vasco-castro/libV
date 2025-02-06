/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 15:05:56 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/06 16:40:45 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libV.h"

int	main(int argc, char const *argv[])
{
	char	*str;

	if (argc <= 1)
	{
		ft_println_fd("You must input at least one value!", 2);
		exit(1);
	}
	if (!**argv || !*argv || !argv[1])
		exit(1);
	str = ft_calloc(1, ft_strlen(argv[1]) + 1);
	str = ft_memcpy(str, argv[1], ft_strlen(argv[1]));
	if (!str)
		exit(1);
	ft_printf("%s, has the size of %d, %p\n", str, ft_strlen(str), &str);
	free(str);
	return (0);
}
