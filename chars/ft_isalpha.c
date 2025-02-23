/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:13:26 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/23 16:10:49 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libV.h"

/* All alphabet characters, combination of isupper + islower */
int	ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}
