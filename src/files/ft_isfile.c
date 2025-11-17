/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isfile.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 09:17:58 by vsoares-          #+#    #+#             */
/*   Updated: 2025/11/17 17:28:39 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

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
bool	ft_isfile(const char *filename, const char *extension)
{
	const char	*basename;
	const char	*last_slash;
	size_t		basename_len;
	size_t		extension_len;

	if (!filename || !extension)
		return (false);
	last_slash = ft_strrchr(filename, '/');
	if (last_slash)
		basename = last_slash + 1;
	else
		basename = filename;
	basename_len = ft_strlen(basename);
	extension_len = ft_strlen(extension);
	if (basename_len == 0 || extension_len == 0)
		return (false);
	if (basename_len <= extension_len)
		return (false);
	if (ft_strcmp(basename + basename_len - extension_len, extension) != 0)
		return (false);
	return (basename_len > extension_len);
}
