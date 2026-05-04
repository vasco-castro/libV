/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numeric.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 21:18:37 by vsoares-          #+#    #+#             */
/*   Updated: 2026/05/04 02:39:42 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_NUMERIC_H
# define FT_NUMERIC_H

# include <stdlib.h>
# include <stdbool.h>

int		ft_atoi(const char *str);
int		ft_safe_atoi(const char *str, bool *overflowed);
char	*ft_itoa(int n);

#endif /* FT_NUMERIC_H */
