/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isfile.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 09:17:58 by vsoares-          #+#    #+#             */
/*   Updated: 2025/08/27 09:17:58 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * @brief Checks if the given filename ends with the specified file extension.
 *
 * @param filename The name of the file to check (e.g., "map.ber").
 * @param extension The file extension to validate (e.g., ".ber").
 * @return true if filename ends with extension, false otherwise.
 */
bool	ft_isfile(const char *filename, const char *extension)
{
	size_t	filename_len;
	size_t	extension_len;

	if (!filename || !extension)
		return (false);
	filename_len = ft_strlen(filename);
	extension_len = ft_strlen(extension);
	if (filename_len == 0 || extension_len == 0)
		return (false);
	if (filename_len < extension_len)
		return (false);
	return (ft_strcmp(filename + filename_len - extension_len, extension) == 0);
}
