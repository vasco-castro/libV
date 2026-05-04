/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dpoint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 02:27:32 by vsoares-          #+#    #+#             */
/*   Updated: 2026/05/04 02:36:29 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_points.h"

void	set_dpoint(t_dpoint *point, double x, double y)
{
	point->x = x;
	point->y = y;
}

t_dpoint	get_dpoint(double x, double y)
{
	t_dpoint	point;

	point.x = x;
	point.y = y;
	return (point);
}

void	set_dpoint3d(t_dpoint3d *point, double x, double y, double z)
{
	point->x = x;
	point->y = y;
	point->z = z;
}

t_dpoint3d	get_dpoint3d(double x, double y, double z)
{
	t_dpoint3d	point;

	point.x = x;
	point.y = y;
	point.z = z;
	return (point);
}
