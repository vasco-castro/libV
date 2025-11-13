/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 15:05:56 by vsoares-          #+#    #+#             */
/*   Updated: 2025/11/03 20:54:28 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	arg1(int argc, char const *argv[])
{
	char	*str;

	ft_fprintf(STDERR, URED "You must input at least one value!" RESET"\n");
	ft_printf("Input something on STDIN(%d) and press ENTER:\t" BICYAN, STDIN);
	str = get_next_line(STDERR);
	ft_printf(RESET "GNL from STDIN(%d) to STDOUT(%d):\t" BICYAN "%s" RESET,
		STDIN, STDOUT, str);
	free(str);
}

void	arg0(int argc, char const *argv[])
{
	char	*str;

	if (!**argv || !*argv || !argv[1])
	{
		ft_fprintf(STDERR, URED "Something went wrong!" RESET "\n");
		exit(EXIT_FAILURE);
	}
	str = ft_calloc(1, ft_strlen(argv[1]) + 1);
	str = ft_memcpy(str, argv[1], ft_strlen(argv[1]));
	if (!str)
	{
		ft_fprintf(STDERR, URED "Allocation went wrong!" RESET "\n");
		exit(EXIT_FAILURE);
	}
	ft_printf("%s, has the size of %d, %p\n", str, ft_strlen(str), &str);
	free(str);
}

void	example_test_1(int argc, char const *argv[])
{
	bool	printed;
	char	**tab;
	char	**tab2;

	if (argc <= 1)
		arg1(argc, argv);
	else
		arg0(argc, argv);
	printed = false;
	printed = ft_fprintf(STDERR, URED "Example of an error and a boolean on"
			"STDERR(%d): %b" RESET"\n", printed, STDERR);
	ft_printf("Boolean was printed: %b\n", printed);
	tab = malloc(sizeof(char *) * 3);
	tab[0] = "Hello";
	tab[1] = "World";
	tab[2] = NULL;
	ft_printf("Size of the tab: %d\n%t\n", sizeof(tab), tab);
	tab2 = ft_tabcpy(tab);
	ft_printf("TabCopy of size %d:\n%t", ft_tablen(tab2), tab);
	ft_tabdel(tab2, ft_tablen(tab));
	free(tab);
}

void	example_test_2(void)
{
	if (ft_issign('A'))
		ft_printf("A\n");
	if (ft_issign('4'))
		ft_printf("4\n");
	if (ft_issign('2'))
		ft_printf("2\n");
	if (ft_issign('-'))
		ft_printf("-\n");
	if (ft_issign('+'))
		ft_printf("+\n");
	if (ft_issign('='))
		ft_printf("=\n");
}

void	example_test_3(void)
{
	ft_printf("DEBUG MODE: %b\n", debug_mode());
	debug("DEBUG MODE: %b\n", debug_mode());
	change_debug_mode(true);
	ft_printf("DEBUG MODE: %b\n", debug_mode());
	debug("DEBUG MODE: %b\n", debug_mode());
}

int	main(int argc, char const *argv[])
{
	// example_test_1(argc, argv);
	// example_test_2();
	example_test_3();
	return (EXIT_SUCCESS);
}
