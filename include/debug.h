/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 10:17:13 by vsoares-          #+#    #+#             */
/*   Updated: 2025/11/15 21:18:32 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEBUG_H
# define DEBUG_H

# include <stdbool.h>

bool	debug_mode(void);
bool	change_debug_mode(bool set);
bool	is_debug_flag(const char *arg);
void	parse_debug_mode(int *argc, char *argv[]);

#endif /* DEBUG_H */