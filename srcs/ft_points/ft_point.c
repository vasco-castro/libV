/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 02:27:28 by vsoares-          #+#    #+#             */
/*   Updated: 2026/05/04 02:36:00 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_points.h"

void	set_point(t_point *point, int x, int y)
{
	point->x = x;
	point->y = y;
}

t_point	get_point(int x, int y)
{
	t_point	point;

	point.x = x;
	point.y = y;
	return (point);
}

void	set_point3d(t_point3d *point, int x, int y, int z)
{
	point->x = x;
	point->y = y;
	point->z = z;
}

t_point3d	get_point3d(int x, int y, int z)
{
	t_point3d	point;

	point.x = x;
	point.y = y;
	point.z = z;
	return (point);
}
