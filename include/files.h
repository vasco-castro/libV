/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   files.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 21:18:26 by vsoares-          #+#    #+#             */
/*   Updated: 2026/01/08 18:26:25 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILES_H
# define FILES_H

# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>
# include <stddef.h>
# include <limits.h>
# include <fcntl.h>
# include "string.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# define FD_MAX 1024

char	*get_next_line(int fd);
bool	ft_isfile(const char *filename, const char *extension);

#endif