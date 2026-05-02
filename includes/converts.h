/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converts.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 21:18:37 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/28 21:18:40 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTS_H
# define CONVERTS_H

# include <stdlib.h>
# include <stdbool.h>

int		ft_atoi(const char *str);
int		ft_safe_atoi(const char *str, bool *overflowed);
char	*ft_itoa(int n);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif