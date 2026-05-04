/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_debug.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 10:17:13 by vsoares-          #+#    #+#             */
/*   Updated: 2026/05/04 02:39:13 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DEBUG_H
# define FT_DEBUG_H

# include <stdbool.h>
# include <stdarg.h>

bool	debug_mode(void);
bool	change_debug_mode(bool set);
bool	is_debug_flag(const char *arg);
bool	parse_debug_mode(int *argc, char *argv[]);

int		debug(const char *str, ...);

#endif /* FT_DEBUG_H */
