/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fpoint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 02:27:30 by vsoares-          #+#    #+#             */
/*   Updated: 2026/05/04 02:36:49 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_points.h"

void	set_fpoint(t_fpoint *point, float x, float y)
{
	point->x = x;
	point->y = y;
}

t_fpoint	get_fpoint(float x, float y)
{
	t_fpoint	point;

	point.x = x;
	point.y = y;
	return (point);
}

void	set_fpoint3d(t_fpoint3d *point, float x, float y, float z)
{
	point->x = x;
	point->y = y;
	point->z = z;
}

t_fpoint3d	get_fpoint3d(float x, float y, float z)
{
	t_fpoint3d	point;

	point.x = x;
	point.y = y;
	point.z = z;
	return (point);
}
