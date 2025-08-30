/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 15:05:56 by vsoares-          #+#    #+#             */
/*   Updated: 2025/08/30 15:35:10 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	main(int argc, char const *argv[])
{
	char	*str;
	bool	printed;

	if (argc <= 1)
	{
		ft_fprintf(STDERR, URED "You must input at least one value!" RESET "\n");
		ft_printf("Input something on STDIN(%d) and press ENTER:\t" BICYAN, STDIN);
		str = get_next_line(STDERR);
		ft_printf(RESET "GNL from STDIN(%d) to STDOUT(%d):\t" BICYAN "%s" RESET, STDIN, STDOUT, str);
		free(str);
	} else
	{
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

	printed = false;
	printed = ft_fprintf(STDERR, URED "Example of an error and a boolean on STDERR(%d): %b" RESET"\n", printed, STDERR);
	ft_printf("Boolean was printed: %b\n", printed);

	char **tab = malloc(sizeof(char *) * 3);
	tab[0] = "Hello";
	tab[1] = "World";
	tab[2] = NULL;
	ft_printf("Size of the tab: %d\n%t\n", sizeof(tab), tab);
	free(tab);
	return (0);
}
