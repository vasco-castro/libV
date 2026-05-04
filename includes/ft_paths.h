/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_paths.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 21:18:26 by vsoares-          #+#    #+#             */
/*   Updated: 2026/05/04 01:22:50 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PATHS_H
# define FT_PATHS_H

# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>
# include <stddef.h>
# include <limits.h>
# include "ft_string.h"

char	*ft_dirname(const char *filename);
char	*ft_basename(const char *filename);
char	*ft_extension(const char *filename);
bool	ft_has_extension(const char *filename, const char *extension);

#endif /* FT_PATHS_H */