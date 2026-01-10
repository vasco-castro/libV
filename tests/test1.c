/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 21:03:08 by vsoares-          #+#    #+#             */
/*   Updated: 2026/01/10 16:24:41 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static void	teste1_0(char const *argv[])
{
	char	*str;

	if (!**argv || !*argv || !argv[1])
	{
		ft_fprintf(STDERR_FILENO, URED "Something went wrong!" RESET "\n");
		exit(EXIT_FAILURE);
	}
	str = ft_calloc(1, ft_strlen(argv[1]) + 1);
	str = ft_memcpy(str, argv[1], ft_strlen(argv[1]));
	if (!str)
	{
		ft_fprintf(STDERR_FILENO, URED "Allocation went wrong!" RESET "\n");
		exit(EXIT_FAILURE);
	}
	ft_printf("%s, has the size of %d, %p\n", str, ft_strlen(str), &str);
	free(str);
}

static void	teste1_1(void)
{
	char	*str;

	ft_fprintf(STDERR_FILENO, URED "You must input at least one value!" RESET"\n");
	ft_printf("Input something on STDIN(%d) and press ENTER:\t" BICYAN, STDIN_FILENO);
	str = get_next_line(STDERR_FILENO);
	ft_printf(RESET "GNL from STDIN(%d) to STDOUT(%d):\t" BICYAN "%s" RESET,
		STDIN_FILENO, STDOUT_FILENO, str);
	free(str);
}

void	test1(int argc, char const *argv[])
{
	bool	printed;
	char	**tab;
	char	**tab2;

	if (argc > 1)
		teste1_0(argv);
	else
		teste1_1();
	printed = false;
	printed = ft_fprintf(STDERR_FILENO, URED "Example of an error and a boolean on"
			"STDERR(%d): %b" RESET"\n", printed, STDERR_FILENO);
	ft_printf("Boolean was printed: %b\n", printed);
	tab = malloc(sizeof(char *) * 3);
	tab[0] = "Hello";
	tab[1] = "World";
	tab[2] = NULL;
	ft_printf("Size of the tab: %d\n%t\n", sizeof(tab), tab);
	tab2 = ft_tabcpy(tab);
	ft_printf("TabCopy of size %d:\n%t", ft_tablen(tab2), tab);
	ft_tabfree(tab2);
	free(tab);
}
