/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_paths.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 09:17:58 by vsoares-          #+#    #+#             */
/*   Updated: 2026/05/04 01:21:08 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_paths.h"

// No slash found, return current directory
char	*ft_dirname(const char *filename)
{
	const char	*last_slash;
	size_t		dir_len;
	char		*dir;

	last_slash = ft_strrchr(filename, '/');
	if (last_slash)
	{
		dir_len = last_slash - filename;
		dir = malloc(dir_len + 1);
		if (!dir)
			return (NULL);
		ft_strlcpy(dir, filename, dir_len + 1);
		return (dir);
	}
	return (ft_strdup("."));
}

char	*ft_basename(const char *filename)
{
	const char	*last_slash;

	last_slash = ft_strrchr(filename, '/');
	if (last_slash)
		return ((char *)(last_slash + 1));
	return ((char *)filename);
}

char	*ft_extension(const char *filename)
{
	const char	*dot;

	dot = ft_strrchr(filename, '.');
	if (dot && dot != filename)
		return ((char *)dot);
	return (NULL);
}

/**
 * @brief Checks if the given filename ends with the specified file extension
 * and has a valid name part (not just the extension).
 *
 * @param filename The name of the file to check
 	(e.g., "map.ber" or "/path/to/map.ber").
 * @param extension The file extension to validate (e.g., ".ber").
 * @return true if filename ends with extension and has a name part,
 	false otherwise.
 */
bool	ft_has_extension(const char *filename, const char *extension)
{
	if (!filename || !extension)
		return (false);
	return (ft_strcmp(ft_extension(filename), extension) == 0);
}
