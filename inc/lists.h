/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 17:47:01 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/23 17:47:03 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LISTS_H
#define LISTS_H

#include "libft.h"

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

#endif