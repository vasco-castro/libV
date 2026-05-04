/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctype.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 21:18:32 by vsoares-          #+#    #+#             */
/*   Updated: 2026/05/04 02:38:54 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CTYPE_H
# define FT_CTYPE_H

# include <stdbool.h>

bool	ft_isalpha(int c);
bool	ft_isdigit(int c);
bool	ft_isxdigit(int c);
bool	ft_isalnum(int c);
bool	ft_isblank(int c);
bool	ft_isspace(int c);
bool	ft_ispunct(int c);
bool	ft_isgraph(int c);
bool	ft_iscntrl(int c);
bool	ft_isprint(int c);
bool	ft_isascii(int c);

bool	ft_isupper(int c);
bool	ft_islower(int c);

int		ft_tolower(int c);
int		ft_toupper(int c);

int		ft_issign(int c);

#endif /* FT_CTYPE_H */
